/*例6.1 对10个数组元素依次赋值为0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 要求按逆序输出
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

/*例6.2 用数组来处理求Fibonacci数列问题
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
		if (i % 5 == 0) printf("\n");//这里其实是遇到第6个数的时候再换行
		printf("%12d", f[i]);
	}
	return 0;
}
*/

//例6.3 有10个地区的面积要求对它们按由小到大的顺序排列。
//方法一：根据自己理解的起泡法进行编程(刚开始编写的，是错的。思路理解的有问题。)
//#include<stdio.h>
//int main()
//{
//	//int a[10] = { 1,3,2,4,6,5,8,7,10,9 },i, n = 9, j, t; 
//	int a[10] = {2,4,1,3,9,5,10,8,6,7},i, n = 9, j, t;
//	for ( i = 0; i < 9 ; i++)//这9次循环是从第1个数开始逐个向后对比，9次是因为从前向后一共有9个数需要与其后面的数进行对比。
//	{
//		
//
//		for (j=0; j < n-i && i < 9; j++)//这个循环是上一个循环中每一个数都和右边的数进行一次对比，所以循环次数是9-i，i从0开始，本题中是9-0=9，刚开始i第一个循环（称之为外循环）的内循环是9-0=9次，i=1即第二个外循环，内循环是9-1=8次，直到i=8，内循环是9-8=1次
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

/*方法一：更正之后正确的（要点有三，1 - 外循环是9次；2 - 内循环是逐个将最大值放到最后，次数是9 - j（每增加一个外循环就减少一个内循环）；3 - 内循环通过一个中间值t来将前后两个数调换）
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
	for (i = 0; i < 9; i++)//这9次循环是从第1个数开始逐个向后对比，9次是因为从前向后一共有9个数需要与其后面的数进行对比。
	{


		for (j = 0; j < 9 - i; j++)//这个循环是上一个循环中每一个数都和右边的数进行一次对比，所以循环次数是9-i，i从0开始，本题中是9-0=9，刚开始i第一个循环（称之为外循环）的内循环是9-0=9次，i=1即第二个外循环，内循环是9-1=8次，直到i=8，内循环是9-8=1次
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


//判断a[10]这个一维数组中有多少个非零的数
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
	printf("t=%d",t);//t代表a[10]这个一维数组中的非零数的个数。
	return 0;
}
*/


//创建一个二维数组并输出他们
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

/*例6.4 将一个二维数组行和列的元素互换，存到另一个二维数组中。
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

//例6.5 有一个3×4矩阵，要求编程序，求出其中值最大的那个元素的值，以及其所在的行号和列号。
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

//例6.6输出一个已知的字符串
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


//例6.7 输出一个棱形图
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

//字符串输入输出练习
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

//例6.8