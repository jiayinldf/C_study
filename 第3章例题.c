/*����3.1 �������¶�ת��Ϊ�����¶�
#include<stdio.h>
int main()
{
	float f, c;
	printf("�������뻪�϶ȵ�ֵ������С��������1λ��f=");
	scanf_s("%f",&f);
	c = (5.0 / 9.0) * (f - 32);
	printf("���϶�ת��Ϊ���϶ȵ�ֵ�ǣ�%f",c);
	return 0;
}
*/

/*��3.2 ���㶨�ڴ�Ϣ��
#include<stdio.h>
int main()
{
	float p0 = 1000, r1 = 0.0036, r2 = 0.0225, r3 = 0.0198, p1, p2, p3;
	p1 = p0 * (1 + r1);
	p2 = p0 * (1 + r2);
	p3 = p0 * (1 + r3 / 2) * (1 + r3 / 2);
	printf("�����һ�걾Ϣ���ǣ�%f\n��һ�궨�ڱ�Ϣ���ǣ�%f\n�����ΰ��궨�ڱ�Ϣ���ǣ�%f\n", p1, p2, p3);
	return 0;
}
*/

/*��3.3 ����һ����д��ĸ��Ҫ����Сд��ĸ���
#include<stdio.h>
int main()
{
	char c1, c2;
	printf("Please input char:");
	scanf_s("%c",&c1);

	c2 = c1 + 32;
	printf("The output is:%c",c2);

	return 0;
}
*/

/*��3.4 ���������ε����߳��������������
#include<stdio.h>
#include<math.h>
int main()
{
	int try_triangle(double x, double y, double z);
	double a, b, c, s, area;
	
	printf("Please input the lengths of the three sides of the triangle,such as: a,b,c\n");
	scanf_s("%lf,%lf,%lf", &a, &b, &c);
	
	if (try_triangle(a, b, c))//������ʵ�����ж�try_triangle��������Ľ�����棨1�����Ǽ٣�0�������棨1������㣬�Ǽ��򵯳����档
	{
		printf("The input satisfied the order of triangle ");
		s = (a + b + c) / 2;
		area = sqrt(s * (s - a) * (s - b) * (s - c));
		printf("a = %lf,\t b = %lf,\t c = %lf\t\n", a, b, c);
		printf("area = %f\n", area);
	}
	else
	{
		printf("The inputs not satisfied the order of triangle");
	}
	
		return 0;
}

int try_triangle(double x, double y, double z)
{
	if (z < x + y && x < y + z && y < x + z)
	{
	
		return 1;
	}
	else
	{
		return 0;
	}
}
*/

/*��3.5 ����η��̵ĸ�
#include<stdio.h>
#include<math.h>
int main()
{
	int panduan_square(double x, double y, double z);
	double a, b, c, x1, x2, p, q, disc;
	printf("Please input three value,such as:a,b,c\t��ע��Ҫ�л���Ӣ�����뷨\n");
	scanf_s("%lf, %lf, %lf",&a,&b,&c);
	if (panduan_square(a,b,c))
	{
		disc = b * b - 4.0 * a * c;
		p = -b / (2.0 * a);
		q = sqrt(disc) / (2 * a);
		x1 = p + q;
		x2 = p - q;
		printf("Input is a=%lf,\tb=%lf,\tc=%lf\n",a,b,c);
		printf("x1 = %7.2f\nx2 = %7.2f\n ", x1, x2);
	}
	else
	{
		printf("The input is wrong,disc is not > 0\n");
	}
	return 0;
}

int panduan_square(double x, double y, double z)
{
	if (y*y-4*x*z>0)
	{
		return 1;
	}
	else
	{
		return 0;
	}

}
*/



/*��3.6�� % f���ʵ����ֻ�ܵõ�6λС����
#include<stdio.h>
int main()
{
	double a = 1.0,c;
	c = a / 3;
	printf("%15.10lf\n", c);
	//printf("%f\n", c);
	return 0;

}
*/


//��3.8�Ⱥ����BOY�����ַ�:�ⷨ1
/*#include<stdio.h>
int main()
{
	char a = 'B', b = 'O', c = 'Y';
	printf("%c%c%c\n", a, b, c);
	return 0;
}
*/

//��3.8�Ⱥ����BOY�����ַ����ⷨ2
/*#include<stdio.h>
int main()
{
	char a = 'b', b = 'o', c = 'y';
	putchar(a);
	putchar(b);
	putchar(c);
	putchar('\n');
	return 0;
}
*/
/*��3.9 �Ӽ�������BOY������ĸ�����������������Ļ_�ⷨ1
#include<stdio.h>
int main()
{
	char a, b, c;
	a = getchar();
	b = getchar();
	c = getchar();
	putchar(a);
	putchar(b);
	putchar(c);
	return 0;
}
*/
//��3.9 �Ӽ�������BOY������ĸ�����������������Ļ_�ⷨ2
/*#include<stdio.h>
int main()
{
	
	putchar(getchar());
	putchar(getchar());
	putchar(getchar());
	return 0;
}
*/

//��3.10 ��д��3.3��ʹ�����һ����д��ĸ��Ҫ����Сд��ĸ���������putchar��gerchar����
/*#include<stdio.h>
int main()
{
	char c1, c2;
	printf("Please input char:");
	c1 = getchar();

	c2 = c1 + 32;
	printf("The output is:");
	putchar(c2);

	return 0;
}
*/
