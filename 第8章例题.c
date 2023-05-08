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










