/*��2.18 ��5��
#include<stdio.h>
int main()
{
	int t, i;
	t = 1;
	i = 1;
	while (i<=5)
	{
		t = t * i;
		printf("��%dѭ��,t=%d\n", i, t);
		i = i + 1;
	}
	printf("%d��ѭ��������t=%d\n", i-1, t);
	return 0;

}
*/

/*��2.19 �����ʽ��ֵ
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
	printf("����ʽ�ĺ��ǣ�%f",sum);
	return 0;
}
*/
