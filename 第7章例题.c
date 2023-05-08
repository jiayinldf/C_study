
//第7章

/*例7.1 输出以下结果，用函数调用实现
#include<stdio.h>
int main() {
	void print_star();
	void print_message();
	print_star();
	print_message();
	print_star();
	return 0;
}
*/

//void print_star()
//{
//	printf("*****************\n");
//}
//
//void print_message()
//{
//	printf("how do you do!\n");
//}


/*例7.2 求两个数中的最大值，要求调用函数实现
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	int max(int x, int y);
	int a, b, c;
	puts("please enter two number such as:a,b\n");
	scanf("%d,%d",&a,&b);

	c = max(a, b);
	printf("the max number is: %d", c);
	return 0;
}

int max(int x, int y)
{
	int z;
	z = x > y ? x : y;
	return z;
}
*/

/*例7.4 输入两个数，用一个函数求这两个数的和
#include<stdio.h>
int main()
{
	float add(float x, float y);
	float a, b, c;
	puts("please enter two number such as: a,b\n");
	scanf_s("%f,%f", &a, &b);
	c = add(a, b);
	printf("add is %5.2f\n", c);
	return 0;

}

float add(float x, float y)
{
	float c;
	c = x + y;
	return c;
}
*/

/*例7.5 求四个数中的最大者，要求使用函数嵌套方式
#include<stdio.h>
int main()
{
	int max4(int a, int b, int c, int d);
	int a, b, c, d,max;
	puts("enter four number such as: a,b,c,d\n");
	scanf_s("%d,%d,%d,%d", &a, &b, &c, &d);
	max=max4(a, b, c, d);
	printf("max=%d", max);
	return 0;

}

int max4(int a, int b, int c, int d)
{
	int max2(int a, int b);
	int m;
	m = max2(a, b);
	m = max2(m, c);
	m = max2(m, d);
	return m;
}

int max2(int a, int b)
{
	int c;
	c = a > b ? a : b;
	return c;
}

//方法二：精简程序
#include<stdio.h>
int main()
{
	int max4(int a, int b, int c, int d);
	int a, b, c, d, max;
	puts("enter four number such as: a,b,c,d\n");
	scanf_s("%d,%d,%d,%d", &a, &b, &c, &d);
	max = max4(a, b, c, d);
	printf("max=%d", max);
	return 0;

}

int max4(int a, int b, int c, int d)
{
	int max2(int a, int b);
	return (max2(d,max2(c,max2(a,b))));
}

int max2(int a, int b)
{
	return (a > b ? a : b);
}
*/

/*例7.6 求第五个学生的年龄，使用递归法
#include<stdio.h>
int age(int n)
{
	int m;
	if (n == 1)
	{
		m = 10;
	}
	else
		m = age(n - 1)+2;
	return m;
}

int main()
{
	int age(int n);
	int n;
	puts("enter n\n");
	scanf_s("%d", &n);
	printf("age=%d", age(n));
	return 0;
}
*/

/*例7.7 求n！
#include<stdio.h>
int main()
{
	int n, a;
	puts("enter n\n");
	scanf_s("%d",&n);
	printf("n!=%d", fac(n));
	return 0;
}

int fac(int n)
{
	int c;
	if (n==0||n==1)
	{
		c = 1;
	}
	else
	{
		c = fac(n - 1) * n;
	}
	return c;
}
*/

//例7.8 ★★★汉诺塔问题（暂时理解不了，后面再解决）











//例7.9 输入10个数，要求输出其中值最大的元素和该数是第几个数
/*#include<stdio.h>
int main()
{
	int max(int, int);
	int a[10], m, n, i;
	printf("please enter 10 number\n");
	for ( i = 0; i < 10; i++)
	{
		scanf_s("%d", &a[i]);
	}
	
	printf("The 10 numbers are:\n");
	for ( i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	puts("\n");

	for ( i = 1,m=a[0],n=0; i < 10; i++)
	{
		if (max(m,a[i])>m)
		{
			m = a[i];
			n = i;
		} 

	}
	printf("最大值是%d,序号是%d", m, n);

}

int max(int x, int y)
{
	return(x>y? x:y);
}
*/

//例7.10 有一个一维数组score，内放10个学生成绩，求平均成绩

/* #define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	float average(float array[10]);
	int i=0;
	float score[10];
	puts("please enter 10 numbers\n");
	for (size_t i = 0; i < 10; i++)
	{
		scanf("%f", &score[i]);
	}
	puts("\n");

	while (i<10)
	{
		printf("%f	", score[i]);
		i++;
	}

	//求平均成绩
	puts("\n");
	printf("平均成绩=%f\n", average(score));
	return 0;

}


float average(float array[10])
{
	int i;
	float sum, average;
	for ( i = 1,sum = array[0]; i < 10; i++)
	{
		sum = sum + array[i];

	}
	average = sum / 10;
	return average;
}

*/

/*例7.11 有两个班级，分别为5名和10名学生，调用一个average函数，分别求这两个班的学生的平均成绩。
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
float average(float array[], int n)
{
	int i;
	float sum=array[0], average;
	for (size_t i = 1; i < n; i++)
	{
		sum += array[i];

	}
	average = sum / n;
	return average;
}

int main()
{
	int i=0;
	float score1[5], score2[10];
	puts("please enter 5 numbers of score1\n");
	for (size_t i = 0; i < 5; i++)
	{
		scanf("%f", &score1[i]);
	}
	puts("\n");

	while (i < 5)
	{
		printf("%f	", score1[i]);
		i++;
	}

	puts("please enter 10 numbers of score2\n");
	for (size_t i = 0; i < 10; i++)
	{
		scanf("%f", &score2[i]);
	}
	puts("\n");

	i = 0;
	while (i < 10)
	{
		printf("%f	", score2[i]);
		i++;
	}

	//求平均成绩
	puts("\n");
	printf("score1平均成绩=%f\nscore2平均成绩=%f\n",average(score1,5),average(score2,10));
	return 0;
}
*/

/*例7.12 用选择法对数组中10个整数按由小到大排序
#include<stdio.h>
int main()
{
	void sort(int array[], int n);
	int score[10], i, j, n=10;
	puts("enter 10 number\n");
	for (size_t i = 0; i < 10; i++)
	{
		scanf_s("%d", &score[i]);

	}
	puts("\n");

	puts("the 10 number is\n");
	for (size_t i = 0; i < 10; i++)
	{
		printf("%d	", score[i]);
	}
	puts("\n");

	puts("the new sort is :\n");
	sort(score,n);
	for (size_t i = 0; i < 10; i++)
	{
		printf("%d	", score[i]);
	}
	
	return 0;

}

void sort(int array[], int n)
{
	int i, j,t;
	for (size_t i = 1; i < n; i++)
	{

		for (size_t j = 0; j < n-i; j++)
		{
			if (array[j] > array[j + 1])
			{
				t = array[j + 1];
				array[j + 1] = array[j];
				array[j] = t;
			}
		}
	}
}
*/

//例7.13有一个3×4的矩阵，求所有元素中的最大值
/*#define _crt_secure_no_warnings
#include<stdio.h>
int main()
{
	int max(int array[3][4]);
	//int a[3][4] = { {1,3,5,7},{2,4,6,8},{15,17,34,12} };
	
	int a[3][4],i, j;
	int m=1, n=2;
	
	for (size_t i = 0; i < 3; i++)
	{
		printf("enter 4 number\n");
		for (size_t j = 0; j < 4; j++)
		{
			scanf("%d", &a[i][j]);
		}
		
	}

	puts("the array a[3][4] is:\n");

	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			printf("%d ", a[i][j]);
		}
		puts("\n");
	}
	
	printf("the max number of a[3][4] is:%d\n ",max(a));
	return 0;
}

int max(int array[][4])
{
	int i, j, max,m,n;
	
	for ( i = 0; i < 3; i++)
	{
		for ( j = 0,max=0; j < 4; j++)
		{
			if (array[i][j]>max)
			{
				max = array[i][j];
				m = i;
				n = j;

			}
		}

	}
	return (max);
}
*/


//方法二 可以输出最大值所在的行和列
/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int m=1, n=1;//定义全局变量即可在下面每一次变动中改变m，n的值而不会消失。
int main()
{
	int max(int array[][4]);
	//int a[3][4] = { {1,3,5,7},{2,4,6,8},{15,17,34,12} };

	int a[3][4],i, j;
	

	for (int i = 0; i < 3; i++)
	{
		printf("enter 4 number\n");
		for (int j = 0; j < 4; j++)
		{
			scanf("%d", &a[i][j]);
		}

	}

	puts("the array a[3][4] is:\n");

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%d ", a[i][j]);
		}
		puts("\n");
	}

	printf("the max number of a[3][4] is:%d\nthe row is %d,col is %d\n ",max(a),m,n);
	return 0;
}

int max(int array[][4])
{
	int i, j, max1 = array[0][0];//在开头就要定义max变量，而不是在for（j=0，max=array[0][0]）中定义

	for ( i = 0; i < 3; i++)
	{
		for ( j = 0; j < 4; j++)
		{
			if (array[i][j] > max1)
			{
				max1 = array[i][j];
				m = i + 1;
				n = j + 1;

			}
			else
			{
				max1 = max1;
				m = m;
				n = n;
			}

		}

	}
	return max1;
}
*/

//方法三 可以输出最大值所在的行和列（使用指针）
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int max(int array[][4]);
	//int a[3][4] = { {1,3,5,7},{2,4,6,8},{15,17,34,12} };

	int a[3][4],i, j,max1;
	int m = 1, n = 1;
	int* pm, * pn;
	pm = &m;
	pn = &n;



	for (int i = 0; i < 3; i++)
	{
		printf("enter 4 number\n");
		for (int j = 0; j < 4; j++)
		{
			scanf("%d", &a[i][j]);
		}

	}

	puts("the array a[3][4] is:\n");

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%d ", a[i][j]);
		}
		puts("\n");
	}
	max1 = max(a, pm, pn);
	printf("the max number of a[3][4] is:%d\nthe row is %d,col is %d\n ",max1,m,n);
	return 0;
}

int max(int array[][4],int *pm,int *pn)
{
	int i, j, max1 = array[0][0];//在开头就要定义max变量，而不是在for（j=0，max=array[0][0]）中定义

	for ( i = 0; i < 3; i++)
	{
		for ( j = 0; j < 4; j++)
		{
			if (array[i][j] > max1)
			{
				max1 = array[i][j];
				*pm = i + 1;
				*pn = j + 1;

			}
			else
			{
				max1 = max1;
				*pm = *pm;
				*pn = *pn;
			}

		}

	}
	return max1;
}
*/





//例7.14 有一个一维数组，内放10个学生成绩，写一个函数，当主函数调用此函数后，能求出平均分、最高分和最低分

/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

float Max = 0, Min = 0;

int main()
{
	float average(float array[],int n);
	int i;
	float a[10],ave;
	
	puts("enter 10 number\n");
	for ( i = 0; i < 10; i++)
	{
		scanf("%f",&a[i]);
	}
	puts("the a[10] numbers are:\n");
	for ( i = 0; i < 10; i++)
	{
		printf("%f,",a[i]);
	}
	puts("\n");
	//float Max = a[0], Min = a[0];
	ave=average(a,10);
	printf("the ave=%f, Max=%f, Min=%f\n",ave,Max,Min);
	return 0;

}

float average(float array[],int n)
{
	float ave = array[0], sum = 0;
	int i;
	Max = array[0], Min = array[0];//这里应该是直接给Max和Min值，而不是重新定义为float Max，Min；
	for ( i = 1; i < n; i++)
	{
		if (array[i] >= Max)
		{
			Max = array[i];
		}
		
		sum = sum + array[i];
	}
	for ( i = 0; i < n; i++)
	{
		if (array[i] <= Min)
		{
			Min = array[i];
		}
	}
	ave = sum / n;

	return ave;
}
*/


//方法二：课本上的更简洁
/* #define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

float Max = 0, Min = 0;

int main()
{
	float average(float array[], int n);
	int i;
	float a[10], ave;

	puts("enter 10 number\n");
	for (i = 0; i < 10; i++)
	{
		scanf("%f", &a[i]);
	}
	puts("the a[10] numbers are:\n");
	for (i = 0; i < 10; i++)
	{
		printf("%f,", a[i]);
	}
	puts("\n");

	ave = average(a, 10);
	printf("the ave=%f, Max=%f, Min=%f\n", ave, Max, Min);
	return 0;

}

float average(float array[], int n)
{
	float ave = array[0], sum = 0;
	int i;
	Max = array[0], Min = array[0];//这里应该是直接给Max和Min值，而不是重新定义为float Max，Min；
	for (i = 1; i < n; i++)
	{
		if (array[i] >= Max)
		{
			Max = array[i];
		}
		else if (array[i] <= Min)
		{
			Min = array[i];
		}

		sum = sum + array[i];
	}
	
	ave = sum / n;

	return ave;
}
*/



//例7.17 输出1到5的阶乘值
/*#include<stdio.h>
int main()
{
	int f(int n);
	int i;
	for ( i = 1; i <= 5; i++)
	{
		printf("%d!=%d\n", i, f(i));
	}
	return 0;
}

int f(int n)
{
	static int f = 1;
	f = f * n;
	return f;
}
*/

//例7.18 练习外部变量声明。调用函数，求3个整数中的最大者。
/*#include<stdio.h>
int main()
{
	int max(int a, int b, int c);
	extern int A, B, C;
	puts("enter 3 number\n");
	scanf_s("%d,%d,%d", &A, &B, &C);
	printf("max=%d", max(A, B, C));
	return 0;

}

int A, B, C;

int max(int a, int b, int c)
{
	int m;
	m = a > b ? a : b;
	m = m > c ? m : c;
	return m;
}
*/

//例7.19 给定b值，输入a和m，求a*b和a^m的值
/*#include<stdio.h>
 int A;
int main()
{
	int power(int m);
	int b,m;
	puts("enter A and b and m\n");
	scanf_s("%d,%d,%d",&A,&b,&m);
	m = power(m);
	printf("A*b=%d\nA^m=%d\n", A * b, m);
	return 0;

}
*/
//例7.20 有一个字符串，要求删除其中的空格，使用外部函数实现。
/*#include<stdio.h>
//#include<string.h>
int main() 
{
	extern void enter_str(char str[]);
	extern void delete_str(char str[], char ch);
	extern void print_str(char str[]);
	char str[80];
	char ch;
	puts("enter the sentence\n");
	enter_str(str);
	printf("%s\n", str);
	puts("enter which char you want delete\n");
	scanf_s("%c",&ch);
	printf("%c", ch);
	delete_str(str,ch);
	puts("\n");

	printf("the str is:%s\n",str);
	print_str(str);
	return 0;

}
*/





