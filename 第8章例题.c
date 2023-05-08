//例8.1 通过指针变量访问整形变量
/*#include<stdio.h>
int main()
{
	int a = 100, b = 10;
	int * pointer_1, * pointer_2;
	pointer_1 = &a;
	pointer_2 = &b;
	printf("%d,	%d\n", a, b);
	printf("%d,	%d\n", pointer_1, pointer_2);
	printf("%d,	%d\n", *pointer_1, *pointer_2);
	return 0;
}
*/

//理解 *p,p,以及a，b的概念
/*
#include<stdio.h>
int main()
{
	int a = 100, b = 10;
	int * pointer_1, * pointer_2;
	pointer_1 = &a;
	pointer_2 = &b;
	printf("a=%d,	b=%d\n", a, b);
	printf("pointer_1=%d,	pointer_2=%o\n", pointer_1, pointer_2);
	printf("*pointer_1=%d,	*pointer_2=%d\n", *pointer_1, *pointer_2);
	*pointer_1 = 1;
	printf("if *pointer_1 = 1,则\n");
	printf("*pointer_1=%d,	*pointer_2=%d\n", *pointer_1, *pointer_2);
	printf("a=%d,	b=%d\n", a, b);
	printf("pointer_1=%d,	pointer_2=%o\n", pointer_1, pointer_2);
	return 0;
}
*/

//例8.2 输入a和b两个整数，按先大后小的顺序输出a和b（按指针的方法来处理）
/*
#include<stdio.h>
int main()
{
	int a, b, * p1, * p2;
	printf("please enter two numbers:\n");
	scanf_s("%d,%d", &a, &b);
	p1 = &a, p2 = &b;
	if (a<b)
	{
		p1 = &b, p2 = &a;
	}
	printf("a=%d  b=%d\n",a,b);
	printf("max=%d  min=%d\n", *p1, *p2);
	return 0;

}
*/

//例8.3 题目要求同例8.2，现用函数处理。而且用指针类型的数据作函数参数。
/*
#include<stdio.h>
int main()
{
	void swap(int * p1, int * p2);
	int a, b, *p1, *p2;
	puts("enter two numbers:\n");
	scanf_s("%d,%d", &a, &b);
	p1 = &a;
	p2 = &b;
	swap(p1,p2);
	printf("max=%d  min=%d\n", a, b);
	printf("max=%d  min=%d\n", *p1, *p2);
	return 0;
	
}

void swap(int * p1, int * p2)
{
	int temp;
	if (*p1<*p2)
	{
		temp = *p1;
		*p1 = *p2;
		*p2 = temp;
	}

}
*/


//8.5 输入3个整数a,b,c。要求按由小到大的顺序将他们输出。用函数实现。
/*
#include<stdio.h>
int main()
{
	void exchange(int* q1, int* q2, int* q3);
	
	int a, b, c,i;
	int * q1, * q2, * q3;
	int array[3];
	puts("enter 3 numbers:");
	
	for ( i = 0; i < 3; i++)
	{
		scanf_s("%d", &array[i]);
	}
	puts("");
	puts("the 3 numbers are:");
		for ( i = 0; i < 3; i++)
	{
		printf("%d	", array[i]);
	}
		a = array[0];
		b = array[1];
		c = array[2];

	//puts("1");
	q1 = &a;
	q2 = &b;
	q3 = &c;
	exchange(q1, q2, q3);
	puts("");
	puts("");
	printf("the order is:\n%d,%d,%d\n", a, b, c);
	return 0;
}

void exchange(int *q1,int *q2, int *q3)
{
	void swap(int * p1, int * p2);
	if (*q1 > *q2) swap(q1, q2);
	if (*q1 > *q3) swap(q1, q3);
	if (*q2 > *q3) swap(q2, q3);

}

void swap(int *p1 ,int *p2)
{
	int temp;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

*/

//例8.6 有一个整形数组a，有10个元素，要求输出数组中的全部元素。

//方法一：下标法
/*
#include<stdio.h>
int main()
{
	int array[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i;
	for ( i = 0; i < 10; i++)
	{
		printf("%d ", array[i]);
	}
	return 0;
}

*/



//方法二：通过数组名计算数组元素地址，找出元素的值
/*
#include<stdio.h>
int main()
{
	int array[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(array+i));
	}
	return 0;
}
*/

//方法三：用指针变量指向数组元素
/*
#include<stdio.h>
int main()
{
	int array[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i;
	int * p;
	for (p = array; p < (array+10); p++)
	{
		printf("%d ", *p);
	}
	return 0;
}

*/

//方法四：用指针变量指向数组元素
#include<stdio.h>
int main()
{
	int a[10] ;
	int i;
	int * p=a;
	puts("enter 10 number\n");
	for ( i = 0; i < 10; i++)
	{
		scanf_s("%d", p++);
	}
	for (p = array; p < (array + 10); p++)
	{
		printf("%d ", *p);
	}
	return 0;
}

