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
/*
#include<stdio.h>
int main()
{
	void average(float* p, int n);
	void search(float(*p)[4], int n);
	float score[3][4] = { {65,67,70,60},{80,87,90,81},{90,99,100,98} };
	average(*score, 12);//*score������Ԫ�صĵ�ַ
	search(score, 2);//score������ʼ�еĵ�ַ
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

//��8.15 ������8.14�Ļ����ϣ�����һ�����Ͽγ̲������ѧ����������ǵ�ȫ���γ̳ɼ�
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
//��дһ��
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

//��8.16 ����һ���ַ����飬�����д���ַ�����I love China������������ַ����͵�8���ַ���
/*
#include<stdio.h>
int main()
{
	int i;
	char string[] = "I love China��";
	printf("%s\n", string);
	printf("%c\n", string[7]);
	return 0;
}
*/
//��8.17 ͨ���ַ�ָ��������һ���ַ���
/*
#include<stdio.h>
int main()
{
	char* string = "I love China!";
	printf("%s\n", string);
	return 0;
}
*/
//��8.18 ���ַ���a����Ϊ�ַ���b��Ȼ������ַ���b��
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

//��дһ��
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

//��дһ��
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


//����8.19 ��ָ�������������8.18���⡣
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

//��8.20 �ú�������ʵ���ַ����ĸ���
//����˼·������һ������copy_string����ʵ���ַ������ƵĹ��ܣ������������е��ô˺������˺������βκ�ʵ�ο��Էֱ����ַ����������ַ�ָ��������ֱ��̣��Թ������Ƚϡ�
//��1�����ַ���������Ϊ��������
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


//��дһ��
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

//(2)���ַ���ָ�������ʵ��
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

//(3)���ַ�ָ��������βκ�ʵ��
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

//����8.21�ı�ָ�������ֵ
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

//��8.22�ú���������a��b�еĴ��ߡ�
//��1��ͨ�����������ú���
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

//(2)ͨ��ָ�������������ָ��ĺ���
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

//��8.23 ��������������Ȼ�����û�ѡ��1��2��ѡ1ʱ����max��������������еĴ�����ѡ2ʱ����min��������������е�С����
/*
#include<stdio.h>
int main()
{
	int max(int x, int y);
	int min(int x, int y);
	int (* p)(int, int);
	int a, b, c,n;
	p = NULL;//����û�г�ʼ��p��ִ�г���ʱ�ᱨ��
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

//��8.24 ����������a��b�����û�����1,2��3��������1������͸���a��b�еĴ��ߣ�����2���͸���a��b�е�С�ߣ�����3����a��b֮�͡�
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
	p = NULL;//����û�г�ʼ��p��ִ�г���ʱ�ᱨ��

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


//����8.25 ��a��ѧ����ÿ��ѧ����b�ſγ̵ĳɼ���Ҫ�����û�����ѧ������Ժ��������ѧ����ȫ���ɼ�����ָ�뺯����ʵ�֡�
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

























