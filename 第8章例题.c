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
/*
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
	p = a;
	for (i=0;i<10;i++,p++)
	{
		printf("%d ", *p);
	}
	return 0;
}
*/

//例8.8 将数组a中n个整数按相反顺序存放。
/*
#include<stdio.h>
int main() 
{
	void inv(int x[], int n);
	int i, a[10] = { 3,7,9,11,0,6,7,5,4,2 };
	printf("the original array :\n");
	for ( i = 0; i < 10; i++)
	{
		printf("%d", a[i]);
	}
	printf("\n");
	inv(a, 10);
	printf("The array has been inverted:\n");
	for ( i = 0; i < 10; i++)
	{
		printf("%d", a[i]);
	}
	puts("");
	return 0;

}

void inv(int x[], int n)
{
	int temp, i, j, m = (n - 1) / 2;
	for ( i = 0; i < m; i++)
	{
		j = n - 1 - i;
		temp = x[i]; x[i] = x[j]; x[j] = temp;

	}
	return;
}
*/
//方法二:改用指针方法
/*
#include<stdio.h>;
int main()
{
	void inv(int* x, int n);
	int i, a[10] = { 3,7,9,11,0,6,7,5,4,2 };
	printf("the original array :\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d", a[i]);
	}
	printf("\n");
	inv(a, 10);
	printf("The array has been inverted:\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d", a[i]);
	}
	puts("");
	return 0;
}



void inv(int* x, int n)
{
	int* p, temp, * i, * j, m = (n - 1) / 2;
	i = x; j = x + n - 1; p = x + m;//i,j都是指针值，这里的指针就是几个指针数字在运算，不是变量的原值
	for (; i < p; i++, j--)
	{
		temp = *i; *i = *j; *j = temp;
	}
	return;
}
*/

//例8.9 改写例题8.8,用指针变量做实参
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	void inv(int* x, int n);
	int i, arr[10], * p = arr;
	printf("the original array:\n");
	for ( i = 0; i < 10; i++,p++)
	{
		scanf("%d",p);
	}
	puts("");
	p = arr;
	inv(p,10);
	printf("The array has been inverted:\n");
	for (p=arr; p < arr+10; p++)
	{
		printf("%d",*p);
	}
	puts("");
	return 0;
}

void inv(int* x, int n)
{
	int* p, m, temp, * i, * j;
	m = (n - 1) / 2;
	i = x; j = x + n - 1; p = x + m;
	for ( ; i < p; i++,j--)
	{
		temp = *i; *i = *j; *j = temp;
	}
	return;
}

*/

//例8.10 用指针方法对10个整数按由大到小顺序排序
/*
#include<stdio.h>
int main()
{
	void sort(int x[], int n);
	int i, * p, a[10];
	p = a;
	printf("enter 10 integer numbers:");
	for ( i = 0; i < 10; i++)
	{
		scanf_s("%d", p++);

	}
	p = a;
	sort(p, 10);
	for ( p = a,i=0; i <10 ; i++)
	{
		printf("%d  ", *p);
		p++;
	}
	printf("\n");
	return 0;
}

void sort(int x[], int n)
{
	int i, j, k, t;
	for ( i = 0; i < n-1; i++)
	{
		k = i;
		for ( j = i+1; j < n; j++)
		{
			if (x[j]>x[k])
			{
				k = j;
				if (k!=i)
				{
					t = x[i];
					x[i] = x[k];
					x[k] = t;
				}
			}
		}
	}
}
*/



//方法二：普通方法，再复习一遍
/*
#include<stdio.h>
int main()
{
	void sort(int a[], int n);
	int x[10] = { 12,34,5,689,-43,56,-21,0,24,65};
	int n = 10,i;
	sort(x, n);
	for ( i = 0; i < n; i++)
	{
		printf("%d ", x[i]);
	}
	return 0;
}

void sort(int a[], int n)
{
	int i, j, t;
	for ( i = 0; i < n-1; i++)
	{
		
		for ( j = i+1; j < n; j++)
		{
			if (a[i]<a[j])
			{
				t=a[j];
				a[j] = a[i];
				a[i] = t;

			}
		}
		
	}
	return;
}
*/


//例8.11输出二维数组的有关数据（地址和元素的值）
/*
#include<stdio.h>
int main()
{
	int a[3][4] = { 1,3,5,7,9,11,13,15,17,19,21,23 };
	printf("%d,%d\n", a, *a);//0行起始地址和0行0列元素地址
	printf("%d,%d\n", a[0], *(a + 0));//0行0列元素地址
	printf("%d,%d\n", &a[0], &a[0][0]);//0行起始地址和0行0列元素地址
	printf("%d,%d\n", a[1], a + 1);//1行0列元素地址和1行起始地址
	printf("%d,%d\n", &a[1][0], *(a + 1) + 0);//1行0列元素地址
	printf("%d,%d\n", a[2], *(a + 2));//2行0列元素地址
	printf("%d,%d\n", &a[2], a + 2);//2行起始地址
	printf("%d,%d\n", a[1][0], *(*(a + 1) + 0));//1行0列元素的值
	printf("%d,%d\n", *a[2], *(*(a + 2) + 0));//2行0列元素的值
	return 0;

}
*/

//例8.12 有一个3×4的二维数组，要求用指向元素的指针变量输出二维数组各元素的值。
/*
#include<stdio.h>
int main()
{
	int* p, a[3][4] = { {1,3,5,7},{9,11,13,15},{17,19,21,23} };
	p = a;
	for ( ; p< a[0]+12; p++)
	{
		if ((p-a[0])%4==0)
		{
			printf("\n");
		}
		printf("%4d", *p);
	}
	puts("");
	return 0;
}
*/

//例8.13 输出二维数组任一行任一列元素的值(使用指针方法)
//方法一：
/*
#include<stdio.h>
int main()
{
	int a[3][4] = { 1,3,5,7,9,11,13,15,17,19,21,23 };
	int i, j, * p;
	p = a;
	for ( ; p < a + 12; p++)
	{
		if ((p-a) % 4 == 0)
		{
			puts("");
		}
		printf("%4d", *p);

	}
	puts("\n");
	printf("enter row\n");
	scanf_s("%d",&i);
	puts("enter col\n");
	scanf_s("%d",&j);
	p = a;
	printf("%d", *(p+(4 * i + j)));
}
*/
//方法二：
/*
#include<stdio.h>
int main()
{
	int i, j,*p1, (* p)[4], a[3][4] = {1,3,5,7,9,11,13,15,17,19,21,23};
	
	for (p1=a; p1 < a[0] + 12; p1++)
	{
		if ((p1-a)%4==0)
		{
			puts("");
		}
		printf("%d	",*p1);
	}
	i = 0;
	puts("");
	puts("enter row,col\n");
	scanf_s("%d,%d", &i, &j);
	p = a;
	printf("row %d,col %d is %4d", i, j, *(*(p + i) + j));
	return 0;
}
*/

/*
#include<stdio.h>
int main()
{
	int a[4] = { 1,3,5,7 };
	int(*p)[4];
	p = &a;
	printf("%d\n", (*p)[3]);
	return 0;
}
*/

//例8.14 有一个班，3个学生，各学4门课，计算总平均分数以及第n个学生的成绩。
/*
#include<stdio.h>
int main()
{
	void average(float* p, int n);
	void search(float(*p)[4], int n);
	float score[3][4] = { {65,67,70,60},{80,87,90,81},{90,99,100,98} };
	average(*score, 12);
	search(score, 2);
	return 0;
}

void average(float* p, int n)
{
	float* p_end;
	float sum = 0, aver;
	p_end = p + n - 1;
	for ( ; p <= p_end; p++)
	{
		sum = sum + (*p);
	}
	aver = sum / n;
	printf("average=%5.2f\n", aver);
}

void search(float(*p)[4], int n)
{
	int i;
	printf("the score of No.%d are:\n", n);
	for ( i = 0; i < 4; i++)
	{
		printf("%5.2f ", *(*(p + n) + i));
	}
	printf("\n");
}
*/

//自己写的
/*
#include<stdio.h>
int main()
{
	void average(float* p, int n);
	void search(float(*p)[4], int n);
	float score[3][4] = { {65,67,70,60},{80,87,90,81},{90,99,100,98} };
	average(*score, 12);//*score代表首元素的地址
	search(score, 2);//score代表起始行的地址
	return 0;
}

void average(float* p, int n)
{
	float * p_end = p + n;
	float sum = 0, average = 0;
	for ( ; p< p_end; p++)
	{
		sum = sum + *p;
	}
	average = sum / n;
	printf("the average=%5.2f\n", average);
	
	
}


void search(float(*p)[4], int n)
{
	
	int i;
	printf("the score of No.%d are:\n", n);
	for ( i = 0; i < 4; i++)
	{
		printf("%5.2f ", *(*(p + n) + i));
		puts("");
	}
}
*/

//例8.15 在例题8.14的基础上，查找一门以上课程不及格的学生，输出他们的全部课程成绩
/*
#include<stdio.h>
int main()
{
	void search(float(*p)[4], int n);
	float score[3][4]= { {65,57,70,60},{58,87,90,81},{90,99,100,98} };
	search(score, 3);
	return 0;
}

void search(float(*p)[4], int n)
{
	int i, j, flag;
	for ( j = 0; j < n; j++)
	{
		flag = 0;
		for ( i = 0; i < 4; i++)
		{
			if (*(*(p + j) + i) < 60) flag = 1;
		}
		if (flag==1)
		{
			printf("NO.%d fails,his scores are:\n", j + 1);
			for ( i = 0; i < 4; i++)
			{
				printf("%5.1f", *(*(p + j) + i));
			}
			puts("");
		}
	}
}
*/
//再写一遍
/*
#include<stdio.h>
int main()
{
	void search(float(*p)[4], int n);
	float score[3][4]= { {65,57,70,60},{58,87,90,81},{90,99,100,98} };
	search(score, 3);
	return 0;
}

void search(float(*p)[4], int n)
{
	int i, j, flag;
	
	for ( j = 0; j < n; j++)
	{
		flag = 0;
		for ( i = 0; i < 4; i++)
		{
			if (*(*(p+j)+i)<60)
			{
				flag = 1;
			}
		
		}
		if (flag==1)
		{
			printf("NO.%d fails,his scores are:\n", j + 1);
			for ( i = 0; i < 4; i++)
			{
				printf("%5.1f", *(*(p + j) + i));
			}
		}
		puts("");
	}
}
*/

//例8.16 定义一个字符数组，在其中存放字符串“I love China！”，输出该字符串和第8个字符。
/*
#include<stdio.h>
int main()
{
	int i;
	char string[] = "I love China！";
	printf("%s\n", string);
	printf("%c\n", string[7]);
	return 0;
}
*/
//例8.17 通过字符指针变量输出一个字符串
/*
#include<stdio.h>
int main()
{
	char* string = "I love China!";
	printf("%s\n", string);
	return 0;
}
*/
//例8.18 将字符串a复制为字符串b，然后输出字符串b。
/*
#include<stdio.h>
int main()
{
	char a[] = "I am a student.", b[20];
	int i;
	for ( i = 0; *(a+i)!='\0'; i++)
	{
		*(b + i) = *(a + i);
	}
	*(b + i) = '\0';
	printf("string a is :%s\n", a);
	printf("string b is:");
	for ( i = 0; b[i]!='\0'; i++)
	{
		printf("%c", b[i]);
	}printf("\n");
	return 0;
}
*/

//再写一遍
/*
#include<stdio.h>
int main()
{
	char* a= "I am a student";
	char* b;
	b = a;
	printf("%s", b);
	return 0;
}
*/

//再写一遍
/*
#include<stdio.h>
int main()
{
	char a[] = "I am a student", b[20];
	int i;
	for ( i = 0; *(a+i)!='\0'; i++)
	{
		*(b + i) = *(a + i);
	}
	*(b + i) = '\0';
	printf("%s\n", a);
	for (i = 0; b[i] != '\0'; i++)
	{
		printf("%c", b[i]);
	}
	return 0;
}
*/


//例题8.19 用指针变量来处理例8.18问题。
/*
#include<stdio.h>
int main()
{
	char a[] = "I am a boy.", b[20],*p1,*p2;
	p1 = a, p2 = b;

	for (; *p1!='\0'; p1++,p2++)
	{
		*p2 = *p1;
	}
	*p2 = '\0';
	printf("a is:%s\n", a);
	printf("b is:%s\n", b);

	return 0;
}
*/

//例8.20 用函数调用实现字符串的复制
//解题思路：定义一个函数copy_string用来实现字符串复制的功能，在主调函数中调用此函数，此函数的形参和实参可以分别用字符数组名或字符指针变量。分别编程，以供分析比较。
//（1）用字符数组名作为函数参数
/*
#include<stdio.h>
int main()
{
	void copy_string(char from[], char to[]);
	char a[] = "I am a student.";
	char b[] = "You are a student.";
	printf("string a=%s\nstring b=%s\n", a, b);
	printf("copy string a to string b:\n");
	copy_string(a, b);
	printf("\nstring a=%s\nstring b=%s\n", a, b);
	return 0;

}

void copy_string(char from[], char to[])
{
	int i = 0;
	while (from[i]!='\0')
	{
		to[i] = from[i]; 
		i++;
	}
	to[i] = '\0';
}
*/


//再写一遍
/*
#include<stdio.h>
int main()
{
	void copy_string(char from[], char to[]);
	char a[] = "I am a student.";
	char b[] = "I am a boy.";
	printf("string a=%s\nstring b=%s\n", a, b);
	printf("copy string a to b:\n");
	copy_string(a, b);
	printf("string b=%s\n", b);
	return 0;

}

void copy_string(char from[], char to[])
{
	int i = 0;
	while (from[i]!='\0')
	{
		to[i] = from[i];
		i++;

	}
	to[i] = '\0';
	
}
*/

//(2)用字符型指针变量作实参
/*
#include<stdio.h>
int main()
{
	void copy_string(char from[], char to[]);
	char a[] = "I am a student.";
	char b[] = "You are a teacher.";
	char* from = a, * to = b;
	printf("string a=%s\nsting b=%s\n", a, b);
	printf("\ncopy string a to b:\n");
	copy_string(from, to);
	printf("string a=%s\nstring b=%s\n", a, b);
	return 0;
}

void copy_string(char from[], char to[])
{
	int i = 0;
	while (from[i]!='\0')
	{
		to[i] = from[i];
		i++;
				
	}
	to[i] = '\0';

}
*/

//(3)用字符指针变量作形参和实参
/*
#include<stdio.h>
int main()
{
	void copy_string(char* from, char* to);
	char* a = "I am a student.";
	char b[] = "You are a teacher.";
	char *p = b;
	printf("string a=%s\nstring b=%s\n", a, b);
	copy_string(a, p);
	printf("%s\n%s\n", a, b);
	return 0;
}

void copy_string(char* from, char* to)
{
	for ( ; *from!='\0'; from++,to++)
	{
		*to = *from;
	}
	*to = '\0';
}
*/

//例题8.21改变指针变量的值
/*
#include<stdio.h>
int main()
{
	char* a = "I love China!";
	a = a + 7;
	printf("%s\n", a);
	return 0;
}
*/

//例8.22用函数求整数a和b中的大者。
//（1）通过函数名调用函数
/*#include<stdio.h>
int main()
{
	int max(int x, int y);
	int a, b,c;
	printf("enter a ,b\n");
	scanf_s("%d,%d", & a, &b);
	c = max(a, b);
	printf("max=%d	\n", c);
	return 0;



}

int max(int x, int y)
{
	int z;
	if (x > y)
	{
		z = x;

	}
	else
		z = y;
	return z;

}
*/

//(2)通过指针变量调用它所指向的函数
/*
#include<stdio.h>
int main()
{
	int max(int x, int y);
	int (*p)(int, int);

	int a, b, c;
	p = max;
	printf("enter a ,b\n");
	scanf_s("%d,%d", &a, &b);
	c = (*p)(a, b);
	printf("max=%d	\n", c);
	return 0;



}

int max(int x, int y)
{
	int z;
	if (x > y)
	{
		z = x;

	}
	else
		z = y;
	return z;

}
*/

//例8.23 输入两个整数，然后让用户选择1或2，选1时调用max函数，输出二者中的大数，选2时调用min函数，输出二者中的小数。
/*
#include<stdio.h>
int main()
{
	int max(int x, int y);
	int min(int x, int y);
	int (* p)(int, int);
	int a, b, c,n;
	p = NULL;//书中没有初始化p，执行程序时会报错
	printf("enter a and b\n");
	scanf_s("%d,%d", &a, &b);
	printf("choose 1 or 2:");
	scanf_s("%d", &n);
	if (n==1)
	{
		p = max;
	}
	else if (n==2)
	{
		p = min;
	}
	c = (*p)(a, b);
	printf("a=%d,b=%d\n", a, b);
	if (n == 1)
	{
		printf("max=%d\n", c);
	}
	else
		printf("min=%d\n", c);
	return 0;
		

}

int max(int x, int y)
{
	int z;
	if (x > y)
	{
		z = x;
	}
	else
		z = y;
	return(z);
}

int min(int x, int y)
{
	int z;
	if (x > y)
	{
		z = y;
	}
	else
		z = x;
	return(z);
}
*/

//例8.24 有两个整数a和b，由用户输入1,2或3。如输入1，程序就给出a和b中的大者，输入2，就给出a和b中的小者，输入3则求a和b之和。
/*
#include<stdio.h>
int main()
{
	int fun(int x, int y, int (*p)(int, int));
	int add(int x, int y);
	int max(int x, int y);
	int min(int x, int y);
	int (*p)(int, int);
	int a=34, b=-21, n;
	p = NULL;//书中没有初始化p，执行程序时会报错

	printf("choose 1 ,2 or 3:");
	scanf_s("%d", &n);
	if (n == 1)
	{
		fun(a,b,max);
	}
	else if (n == 2)
	{
		fun(a, b, min);
	}
	else if (n == 3)
	{
		fun(a, b, add);
	}

	return 0;


}



int fun(int x, int y, int (*p)(int, int))
{
	int result;
	result = (*p)(x, y);
	printf("%d\n", result);
}




int max(int x, int y)
{
	int z;
	if (x > y)
	{
		z = x;
	}
	else
		z = y;
	printf("max=");
	return(z);
}

int min(int x, int y)
{
	int z;
	if (x > y)
	{
		z = y;
	}
	else
		z = x;
	printf("min=");
	return(z);
}

int add(int x, int y)
{
	int z;
	z = x + y;
	printf("sum=");
	return (z);

}

*/


//例题8.25 有a个学生，每个学生有b门课程的成绩。要求在用户输入学生序号以后，能输出该学生的全部成绩。用指针函数来实现。
#include<stdio.h>
int main()
{
	float score[][4] = { {60,70,80,90},{56,89,67,88},{34,78,90,66} };
	float* search(float(*pointer)[4], int n);
	float* p;
	int i, k;
	printf("enter the number of student:");
	scanf_s("%d", &k);
	printf("the scores of No.%d are:\n", k);
	p = search(score, k);
	for ( i = 0; i < 4; i++)
	{
		printf("%5.2f\t", *(p + i));
	}
	printf("\n");
	return 0;
}

float* search(float(*pointer)[4], int n)
{
	float* pt;
	pt = *(pointer + n);
	return (pt);
}

























