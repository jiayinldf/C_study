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










