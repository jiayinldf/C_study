//��8.1 ͨ��ָ������������α���
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

//��� *p,p,�Լ�a��b�ĸ���
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
	printf("if *pointer_1 = 1,��\n");
	printf("*pointer_1=%d,	*pointer_2=%d\n", *pointer_1, *pointer_2);
	printf("a=%d,	b=%d\n", a, b);
	printf("pointer_1=%d,	pointer_2=%o\n", pointer_1, pointer_2);
	return 0;
}
*/

//��8.2 ����a��b�������������ȴ��С��˳�����a��b����ָ��ķ���������
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

//��8.3 ��ĿҪ��ͬ��8.2�����ú�������������ָ�����͵�����������������
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


//8.5 ����3������a,b,c��Ҫ����С�����˳������������ú���ʵ�֡�
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

//��8.6 ��һ����������a����10��Ԫ�أ�Ҫ����������е�ȫ��Ԫ�ء�

//����һ���±귨
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



//��������ͨ����������������Ԫ�ص�ַ���ҳ�Ԫ�ص�ֵ
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

//����������ָ�����ָ������Ԫ��
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

//�����ģ���ָ�����ָ������Ԫ��
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

//��8.8 ������a��n���������෴˳���š�
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
//������:����ָ�뷽��
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
	i = x; j = x + n - 1; p = x + m;//i,j����ָ��ֵ�������ָ����Ǽ���ָ�����������㣬���Ǳ�����ԭֵ
	for (; i < p; i++, j--)
	{
		temp = *i; *i = *j; *j = temp;
	}
	return;
}
*/

//��8.9 ��д����8.8,��ָ�������ʵ��
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

//��8.10 ��ָ�뷽����10���������ɴ�С˳������
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



//����������ͨ�������ٸ�ϰһ��
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


//��8.11�����ά������й����ݣ���ַ��Ԫ�ص�ֵ��
/*
#include<stdio.h>
int main()
{
	int a[3][4] = { 1,3,5,7,9,11,13,15,17,19,21,23 };
	printf("%d,%d\n", a, *a);//0����ʼ��ַ��0��0��Ԫ�ص�ַ
	printf("%d,%d\n", a[0], *(a + 0));//0��0��Ԫ�ص�ַ
	printf("%d,%d\n", &a[0], &a[0][0]);//0����ʼ��ַ��0��0��Ԫ�ص�ַ
	printf("%d,%d\n", a[1], a + 1);//1��0��Ԫ�ص�ַ��1����ʼ��ַ
	printf("%d,%d\n", &a[1][0], *(a + 1) + 0);//1��0��Ԫ�ص�ַ
	printf("%d,%d\n", a[2], *(a + 2));//2��0��Ԫ�ص�ַ
	printf("%d,%d\n", &a[2], a + 2);//2����ʼ��ַ
	printf("%d,%d\n", a[1][0], *(*(a + 1) + 0));//1��0��Ԫ�ص�ֵ
	printf("%d,%d\n", *a[2], *(*(a + 2) + 0));//2��0��Ԫ�ص�ֵ
	return 0;

}
*/

//��8.12 ��һ��3��4�Ķ�ά���飬Ҫ����ָ��Ԫ�ص�ָ����������ά�����Ԫ�ص�ֵ��
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

//��8.13 �����ά������һ����һ��Ԫ�ص�ֵ(ʹ��ָ�뷽��)
//����һ��
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
//��������
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

//��8.14 ��һ���࣬3��ѧ������ѧ4�ſΣ�������ƽ�������Լ���n��ѧ���ĳɼ���
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

//�Լ�д��
#include<stdio.h>
int main()
{

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
	printf("the average=%5.2f", average);
	
}


void search(float(*p)[4], int n)
{
	float;
	printf("the score of No.%d are:\n", n);
	for ( i = 0; i < length; i++)
	{

	}
}




















