/*��6.1 ��10������Ԫ�����θ�ֵΪ0, 1, 2, 3, 4, 5, 6, 7, 8, 9, Ҫ���������
#include<stdio.h>
int main() {
	int a[10], i;
	for ( i = 0; i <= 9; i++)
	{
		a[i] = i;
	}
	for (i = 9; i >= 0; i--)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	return 0;
}
*/

/*��6.2 ��������������Fibonacci��������
#include<stdio.h>
int main()
{
	int f[20] = { 1,1 },i;
	for ( i = 2; i < 20; i++)
	{
		f[i] = f[i - 2] + f[i - 1];
	}
	for (i = 0; i < 20; i++)
	{
		if (i % 5 == 0) printf("\n");//������ʵ��������6������ʱ���ٻ���
		printf("%12d", f[i]);
	}
	return 0;
}
*/

//��6.3 ��10�����������Ҫ������ǰ���С�����˳�����С�
//����һ�������Լ��������ݷ����б��(�տ�ʼ��д�ģ��Ǵ�ġ�˼·���������⡣)
//#include<stdio.h>
//int main()
//{
//	//int a[10] = { 1,3,2,4,6,5,8,7,10,9 },i, n = 9, j, t; 
//	int a[10] = {2,4,1,3,9,5,10,8,6,7},i, n = 9, j, t;
//	for ( i = 0; i < 9 ; i++)//��9��ѭ���Ǵӵ�1������ʼ������Աȣ�9������Ϊ��ǰ���һ����9������Ҫ�������������жԱȡ�
//	{
//		
//
//		for (j=0; j < n-i && i < 9; j++)//���ѭ������һ��ѭ����ÿһ���������ұߵ�������һ�ζԱȣ�����ѭ��������9-i��i��0��ʼ����������9-0=9���տ�ʼi��һ��ѭ������֮Ϊ��ѭ��������ѭ����9-0=9�Σ�i=1���ڶ�����ѭ������ѭ����9-1=8�Σ�ֱ��i=8����ѭ����9-8=1��
//		{
//			if (a[i+1] < a[i])
//			{
//				t= a[i];
//				a[i] = a[i+1];
//				a[i+1] = t;
//				i++;
//			}
//			
//		}
//	}
//	for ( i = 0; i < 10; i++)
//	{
//		printf("%d	",a[i]);
//	}
//	
//	return 0;
//}

/*����һ������֮����ȷ�ģ�Ҫ��������1 - ��ѭ����9�Σ�2 - ��ѭ������������ֵ�ŵ���󣬴�����9 - j��ÿ����һ����ѭ���ͼ���һ����ѭ������3 - ��ѭ��ͨ��һ���м�ֵt����ǰ��������������
#include<stdio.h>
int main()
{
	//int a[10] = { 1,3,2,4,6,5,8,7,10,9 },i, n = 9, j, t; 
	//int a[10] = { 2,4,1,3,9,5,10,8,6,7 }, i, j, t;
	int a[10], i, j, t;
		printf("please enter 10 number\n");
		for ( i = 0; i <= 9; i++)
		{
			scanf_s("%d", &a[i]);
		}
	
		for (i = 0; i < 10; i++)
		{
			printf("%d	", a[i]);
		}
		printf("\n\n");
	for (i = 0; i < 9; i++)//��9��ѭ���Ǵӵ�1������ʼ������Աȣ�9������Ϊ��ǰ���һ����9������Ҫ�������������жԱȡ�
	{


		for (j = 0; j < 9 - i; j++)//���ѭ������һ��ѭ����ÿһ���������ұߵ�������һ�ζԱȣ�����ѭ��������9-i��i��0��ʼ����������9-0=9���տ�ʼi��һ��ѭ������֮Ϊ��ѭ��������ѭ����9-0=9�Σ�i=1���ڶ�����ѭ������ѭ����9-1=8�Σ�ֱ��i=8����ѭ����9-8=1��
		{
			if (a[j + 1] < a[j])
			{
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
				
			}

		}
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d	", a[i]);
	}

	return 0;
}
*/


//�ж�a[10]���һά�������ж��ٸ��������
/*#include<stdio.h>
int main()
{
	//int a[10] = { 1,3,2,4,6,5,8,7,10,9 },i, n = 9, j, t; 
	//int a[10] = { 2,4,1,3,9,5,10,8,6,7 }, i, j, t;
	int a[10], i, t=0;
	printf("please enter 10 number\n");
	for (i = 0; i <= 9; i++)
	{
		scanf_s("%d", &a[i]);
	}

	for (i = 0; i < 10; i++)
	{
		printf("%d	", a[i]);
		if (a[i]!=0)
		{
			t = t + 1;
		}
	}
	printf("\n");
	printf("t=%d",t);//t����a[10]���һά�����еķ������ĸ�����
	return 0;
}
*/


//����һ����ά���鲢�������
/*#include<stdio.h>
int main()
{
	int a[2][3] = { {1,2,3},{4,5,6} };
	int i, j;
	for ( i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			
			printf("%d", a[i][j]);

		}
		printf("\n");
	}
	return 0;
	
}
*/

/*��6.4 ��һ����ά�����к��е�Ԫ�ػ������浽��һ����ά�����С�
#include<stdio.h>
int main()
{
	
	int i, j, a[2][3] = {{1,2,3},{4,5,6}},b[3][2];
	for ( i = 0; i < 2; i++)
	{
		for ( j = 0; j < 3; j++)
		{
			b[j][i] = a[i][j];
		}

	}
	printf("array a:\n");
	for ( i = 0; i < 2; i++)
	{
		for ( j = 0; j < 3; j++)
		{
			printf("%d	",a[i][j]);

		}
		printf("\n");
	}

	printf("array b:\n");
	for ( i = 0; i < 3; i++)
	{
		for ( j = 0; j < 2; j++)
		{
			printf("%d	", b[i][j]);
			
		}
		printf("\n");
	}
	return 0;
}
*/

//��6.5 ��һ��3��4����Ҫ�������������ֵ�����Ǹ�Ԫ�ص�ֵ���Լ������ڵ��кź��кš�
/*#include<stdio.h>
int main()
{
	int i, j, row = 0, colum = 0, max;
	int a[3][4] = { {1,2,3,4},{9,8,7,6},{-10,10,-5,2} };
	max = a[0][0];
	for ( i = 0; i < 3; i++)
	{
		for ( j = 0; j < 4; j++)
		{
			if (a[i][j]>max)
			{
				max = a[i][j];
				row = i;
				colum = j;
			}
		}
	}
	printf("max=%d\nrow=%d	colum=%d\n", max, row, colum);
	return 0;
}
*/

//��6.6���һ����֪���ַ���
/*#include<stdio.h>
int main()
{
	int i;
	char a[15] = { 'I',' ','a','m',' ','a',' ','s','t','u','d','e','n','t','.' };
	for ( i = 0; i < 15; i++)
	{
		printf("%c", a[i]);
	}
	printf("\n");
	return 0;
}
*/


//��6.7 ���һ������ͼ
/*#include<stdio.h>
int main()
{
	int i,j;
	char a[5][5] = { {' ',' ','*',' ',' '},{' ','*',' ','*',' '},{'*',' ',' ',' ','*'},{' ','*',' ','*',' '},{' ',' ','*',' ',' '} };
	for ( i = 0; i < 5; i++)
	{
		for ( j = 0; j < 5; j++)
		{
			printf("%c", a[i][j]);

		}
		printf("\n");
	}

	printf("\n");
	return 0;
}
*/

//�ַ������������ϰ
//#include<stdio.h>
//int main()
//{
//	char a[10] = { "China!" };
//	printf("%s", a);
//	return 0;
//
//}


//#include<stdio.h>
//int main()
//{
//	char a[] = "China!";
//	printf("%s", a);
//	return 0;
//
//}


//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	char a[12];
//	scanf("%s",a);
//	printf("%s",a);
//	return 0;
//
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	char a[12],b[10],c[6];
//	scanf("%s%s%s", a,b,c);
//	printf("%s %s %s", a,b,c);
//	return 0;
//
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	char a[15];// b[10], c[6];
//		//scanf("%s%s%s", a, b, c);
//	gets(a);
//	puts(a);
//
//	//printf("%s", a, b, c);
//	return 0;
//
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char a[15] = { "how are " };
//	char b[10] = { "you!" };
//	//scanf("%s%s%s", a, b, c);
//	printf("%s", strcat(a,b));
//
//	//printf("%s", a, b, c);
//	return 0;
//
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char a[15] = { "how are " };
//	char b[10] = { "you!" };
//	//scanf("%s%s%s", a, b, c);
//	printf("%s", strcpy(a, b));
//
//	return 0;
//
//}


//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char a[15] = { "you!" };
//	char b[10] = { "you!" };
//	
//	if (strcmp(a, b) > 0)
//	{
//		printf("yes>0");
//	}
//	else if (strcmp(a, b) < 0)
//	{
//		printf("no<0");
//	}
//	else
//		printf("=0");
//	return 0;
//
//}

// #define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char a[15] = { "how are " };
//	char b[10] = { "you!" };
//	//scanf("%s%s%s", a, b, c);
//	printf("%d", strlen(b));
//
//	return 0;
//
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char a[15] = { "how are " };
//	char b[10] = { "you!" };
//	//scanf("%s%s%s", a, b, c);
//	printf("%s", _strupr(b));
//
//	return 0;
//
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char a[15] = { "how are " };
//	char b[10] = { "YoU!" };
//	//scanf("%s%s%s", a, b, c);
//	printf("%s", _strlwr(b));
//
//	return 0;
//
//}

//��6.8