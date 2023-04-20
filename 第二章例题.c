/*例2.18 求5！
#include<stdio.h>
int main()
{
	int t, i;
	t = 1;
	i = 1;
	while (i<=5)
	{
		t = t * i;
		printf("第%d循环,t=%d\n", i, t);
		i = i + 1;
	}
	printf("%d个循环结束，t=%d\n", i-1, t);
	return 0;

}
*/

/*例2.19 求多项式的值
#include<stdio.h>
int main()
{
	int sign = 1;
	double deno = 2.0, sum = 1.0, term;
	while (deno<=100)
	{
		sign = -sign;
		term = sign / deno;
		sum = sum + term;
		deno = deno + 1;
	}
	printf("多项式的和是：%f",sum);
	return 0;
}
*/
