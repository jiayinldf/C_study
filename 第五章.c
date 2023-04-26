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





































































