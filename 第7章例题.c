
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

//��7.11 �������༶���ֱ�Ϊ5����10��ѧ��������һ��average�������ֱ������������ѧ����ƽ���ɼ���
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








