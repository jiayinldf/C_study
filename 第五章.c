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
































































