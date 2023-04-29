/*例5.1 求1 - 100的累加和
#include<stdio.h>
int main()
{
	int i = 1,sum=0;
	while (i<=100)
	{
		sum = sum + i;
		i++;
	}
	printf("SUM=%d", sum);
	return 0;	
}
*/
/*例5.2 使用do while 语句求1 - 100的累加和
#include<stdio.h>
int main()
{
	int i = 1, sum = 0;
	do
	{
		sum = sum + i;
		i++;
	} while (i<=100);
	printf("sum=%d", sum);
	return 0;
}
*/

/*例5.3 while和do  while的比较
//(1)while循环
#define _crt_secure_no_warnings
#include<stdio.h>
int main()
{
	int i, sum = 0;
	printf("please enter i,i=?\n");
	scanf("%d", &i);
	while (i<=10)
	{
		sum = sum + i;
		i++;
	}
	printf("sum=%d", sum);
	return 0;
}

//（2）do while 循环
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i, sum = 0;
	printf("please enter i,i = ?\n");
	scanf("%d", &i);
	do
	{
		sum = sum + i;
		i++;
	} while (i<=10);
	printf("sum=%d", sum);
	return 0;
}
*/


/*for循环
#include<stdio.h>
int main()
{
	int sum = 0;
	for ( int i = 1;  i <= 100;  i++)
	{
		sum = sum + i;
		printf("i=%d\nsum=%d\n",i,sum);

	}
	printf("sum_all=%d",sum);
	
	return 0;
}

#include<stdio.h>
int main()
{
	
	for (char c; (c=getchar())!='\n';)
	{
		
	printf("%c",c);

	}
	

	return 0;
}
*/


/*例5.4 统计学校捐款
#include<stdio.h>
#define SUM 100000
int main()
{
	
	float acount, total, ave;
	int i;
	for ( i = 1,total = 0; i <=1000; i++)
	{
		printf("please enter acount:\n");
		scanf_s("%f", &acount);
		total = total + acount;
		if (total >= SUM) break;
	}
	ave = total / i;
	printf("total=%f,ave=%f,i=%d",total, ave, i);
	return 0;
	

}
*/


/*例5.5 要求输出100 - 200中不能被3整除的数
	//方法一：使用continue语句
#include<stdio.h>
int main()
{
	int i = 100;
	for ( ; i <=200; i++)
	{
		if (i%3==0)
		{
			continue;

		}
		else
		{
			printf("%d\n", i);
		}
		
	}
	return 0;
}

	//方法二：不适用continue语句

#include<stdio.h>
int main() 
{
	int i ;
	for (i = 100; i <=200; i++)
	{
		if (i % 3 != 0) printf("%d\n", i);

	}
	return 0;
}
*/

//例5.8 输出4*5矩阵
//方法一：直接整个输出
		//1-1按加法输出
/*
#include<stdio.h>
int main()
{
	int i, j,b=0;
	for ( i = 1; i <=4; i++)
	{
		for (j = 1; j <= 5; j++)
		{
			b =  b+i;
			printf("%d	", b);
		}
		printf("\n");
		b = 0;
	}
	return 0;
}
*/
	//1-2按乘法输出
/*#include<stdio.h>
int main()
{
	int i, j;
	for ( i = 1; i <= 4; i++)
	{
		for (j = 1; j <= 5; j++)
		{
			
			printf("%d	", i * j);
			if (j % 5 == 0) printf("\n");
						
		}
		
	}
	return 0;

}
*/



//方法二：第三行不输出
/*#include<stdio.h>
int main()
{
	int i, j, b = 0;
	for (i = 1; i <= 4; i++)
	{
		for (j = 1; j <= 5; j++)
		{
			b = b + i;
			if (i == 3)
			{
				break;
			}
			else
			{
				printf("%d	", b);
			}


		}
		printf("\n");
		b = 0;
	}
	return 0;
}
*/

//方法三：第三行最后一个数不输出
/*#include<stdio.h>
int main()
{
	int i, j, b = 0;
	for (i = 1; i <= 4; i++)
	{
		for (j = 1; j <= 5; j++)
		{
			b = b + i;
			if (i == 3&&j==5)
			{
				continue;
			}
			else
			{
				printf("%d	", b);
			}


		}
		printf("\n");
		b = 0;
	}
	return 0;
}
*/



/*例5.7 计算pi的值
#include<stdio.h>
#include<math.h>
int main()
{
	int sig=1,n=1;
	double pi,a=1.0,sum=0;
	
	while (fabs(a)>=1e-8)
	{

		a = sig * (1.0 / ((2 * n)-1));
		sum = sum + a;
		sig = -sig;
		n++;
	}
	pi = 4 * sum;
	printf("pi=%10.8f	n=%d", pi, n);
	return 0;
}
*/

//例5.8 求Fibonacci(斐波那契)数列的前40个数
// 方法一：自己写的方法
/*
#include<stdio.h>

int main()
{
	int i = 3,sum1=1,sum2=1,sum3;
	printf("%12d%12d", sum1, sum2);
	for (; i <= 40; i++)
	{
		
		sum3 = sum2 + sum1;
		sum1 = sum2;
		sum2 = sum3;
		
		printf("%12d", sum3);
		if (i % 4 == 0) printf("\n");
		
	}
	return 0;

	
}
*/

//方法二：课本上的方法，更简洁
/*
#include<stdio.h>
int main()
{
	int i, sum1 = 1, sum2 = 1, sum3 = 2, sum4 = 3;
	
	for (i=1; i <= 10; i++)
	{
		printf("%12d%12d%12d%12d", sum1, sum2,sum3,sum4);

		sum1 = sum3 + sum4;
		sum2 = sum1 + sum4;
		sum3 = sum2 + sum1;
		sum4 = sum2 + sum3;
			
		printf("\n");
	}
	return 0;
}
*/


//例5.9 输入一个大于3的整数n，判定其是否为素数
/*#include<stdio.h>
int main()
{
	int i,n,a;
	printf("please enter a number\n");
	scanf_s("%d", &n);

	for ( i = 2; i <= n-1; i++)
	{
		if (n % i == 0)
		{
				a = 1;
				break;
		}
		else
		{
			a = 2;
		}
	}
	if (a == 1)
	{
		printf("%d 不是素数\n", n);
	}
	else
	{
		printf("%d 是素数\n", n);
	}
	return 0;
}
*/

/*例5.10 求100 - 200内的全部素数
#include<stdio.h>
int main()
{
	int i, n, a,m=0;
	for (n = 100; n <= 200; n++)
	{
		for (i = 2; i <=n-1; i++)
		{
			
			if (n % i == 0)
			{
				a = 1;
				break;
			}
			else
			{
				a = 2;
			}

				
		}
		if (a == 1)
		{
			//printf("%d 不是素数\n", n);
		}
		else
		{
			printf("%d	", n);
			m = m + 1;//m用来控制换行，当累计10个数时，换行。
		}
		if (m % 10 == 0) printf("\n");
		
	}
	return 0;
}

*/

//例5.11 译密码
/*#include<stdio.h>
int main() 
{
	char c;
	c = getchar();
	while (c!='1')
	{
		if ((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
		{
			if ((c >= 'w' && c <= 'z') || (c >= 'W' && c <= 'Z'))
			{
				c = c + 4 - 26;
			}
			else
				c = c + 4;
			
		}

		printf("%c", c);
		c = getchar();
	}
	printf("ok\n");
	return 0;

}
*/

//方法二
/*#include<stdio.h>
int main()
{
	char c;
	
	while ((c=getchar()) != '1')
	{
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		{
			if ((c >= 'w' && c <= 'z') || (c >= 'W' && c <= 'Z'))
			{
				c = c + 4 - 26;
			}
			else
				c = c + 4;

		}

		printf("%c", c);
		
	}
	printf("ok\n");
	return 0;

}
*/





























































