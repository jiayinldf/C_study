
//��7��

/*��7.1 ������½�����ú�������ʵ��
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


/*��7.2 ���������е����ֵ��Ҫ����ú���ʵ��
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

/*��7.4 ��������������һ�����������������ĺ�
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

/*��7.5 ���ĸ����е�����ߣ�Ҫ��ʹ�ú���Ƕ�׷�ʽ
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

//���������������
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

/*��7.6 ������ѧ�������䣬ʹ�õݹ鷨
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

/*��7.7 ��n��
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

//��7.8 ���ﺺŵ�����⣨��ʱ��ⲻ�ˣ������ٽ����











//��7.9 ����10������Ҫ���������ֵ����Ԫ�غ͸����ǵڼ�����
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
	printf("���ֵ��%d,�����%d", m, n);

}

int max(int x, int y)
{
	return(x>y? x:y);
}
*/

//��7.10 ��һ��һά����score���ڷ�10��ѧ���ɼ�����ƽ���ɼ�

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

	//��ƽ���ɼ�
	puts("\n");
	printf("ƽ���ɼ�=%f\n", average(score));
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

/*��7.11 �������༶���ֱ�Ϊ5����10��ѧ��������һ��average�������ֱ������������ѧ����ƽ���ɼ���
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

	//��ƽ���ɼ�
	puts("\n");
	printf("score1ƽ���ɼ�=%f\nscore2ƽ���ɼ�=%f\n",average(score1,5),average(score2,10));
	return 0;
}
*/

/*��7.12 ��ѡ�񷨶�������10����������С��������
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

//��7.13��һ��3��4�ľ���������Ԫ���е����ֵ
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


//������ ����������ֵ���ڵ��к���
/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int m=1, n=1;//����ȫ�ֱ�������������ÿһ�α䶯�иı�m��n��ֵ��������ʧ��
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
	int i, j, max1 = array[0][0];//�ڿ�ͷ��Ҫ����max��������������for��j=0��max=array[0][0]���ж���

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

//������ ����������ֵ���ڵ��к��У�ʹ��ָ�룩
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
	int i, j, max1 = array[0][0];//�ڿ�ͷ��Ҫ����max��������������for��j=0��max=array[0][0]���ж���

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





//��7.14 ��һ��һά���飬�ڷ�10��ѧ���ɼ���дһ�������������������ô˺����������ƽ���֡���߷ֺ���ͷ�

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
	Max = array[0], Min = array[0];//����Ӧ����ֱ�Ӹ�Max��Minֵ�����������¶���Ϊfloat Max��Min��
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


//���������α��ϵĸ����
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
	Max = array[0], Min = array[0];//����Ӧ����ֱ�Ӹ�Max��Minֵ�����������¶���Ϊfloat Max��Min��
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



//��7.17 ���1��5�Ľ׳�ֵ
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

//��7.18 ��ϰ�ⲿ�������������ú�������3�������е�����ߡ�
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

//��7.19 ����bֵ������a��m����a*b��a^m��ֵ
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
//��7.20 ��һ���ַ�����Ҫ��ɾ�����еĿո�ʹ���ⲿ����ʵ�֡�
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





