/*��5.1 ��1 - 100���ۼӺ�
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
/*��5.2 ʹ��do while �����1 - 100���ۼӺ�
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

/*��5.3 while��do  while�ıȽ�
//(1)whileѭ��
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

//��2��do while ѭ��
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


/*forѭ��
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


/*��5.4 ͳ��ѧУ���
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


/*��5.5 Ҫ�����100 - 200�в��ܱ�3��������
	//����һ��ʹ��continue���
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

	//��������������continue���

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

//��5.8 ���4*5����
//����һ��ֱ���������
		//1-1���ӷ����
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
	//1-2���˷����
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



//�������������в����
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

//�����������������һ���������
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



/*��5.7 ����pi��ֵ
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

//��5.8 ��Fibonacci(쳲�����)���е�ǰ40����
// ����һ���Լ�д�ķ���
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

//���������α��ϵķ����������
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


//��5.9 ����һ������3������n���ж����Ƿ�Ϊ����
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
		printf("%d ��������\n", n);
	}
	else
	{
		printf("%d ������\n", n);
	}
	return 0;
}
*/

/*��5.10 ��100 - 200�ڵ�ȫ������
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
			//printf("%d ��������\n", n);
		}
		else
		{
			printf("%d	", n);
			m = m + 1;//m�������ƻ��У����ۼ�10����ʱ�����С�
		}
		if (m % 10 == 0) printf("\n");
		
	}
	return 0;
}

*/

//��5.11 ������
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

//������
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





























































