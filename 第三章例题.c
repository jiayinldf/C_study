/*例题3.1 将华氏温度转变为摄氏温度
#include<stdio.h>
int main()
{
	float f, c;
	printf("请先输入华氏度的值（保留小数点至少1位）f=");
	scanf_s("%f",&f);
	c = (5.0 / 9.0) * (f - 32);
	printf("华氏度转化为摄氏度的值是：%f",c);
	return 0;
}
*/

/*例3.2 计算定期存款本息和
#include<stdio.h>
int main()
{
	float p0 = 1000, r1 = 0.0036, r2 = 0.0225, r3 = 0.0198, p1, p2, p3;
	p1 = p0 * (1 + r1);
	p2 = p0 * (1 + r2);
	p3 = p0 * (1 + r3 / 2) * (1 + r3 / 2);
	printf("存活期一年本息和是：%f\n存一年定期本息和是：%f\n存两次半年定期本息和是：%f\n", p1, p2, p3);
	return 0;
}
*/

/*例3.3 给定一个大写字母，要求用小写字母输出
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

/*例3.4 给出三角形的三边长，求三角形面积
#include<stdio.h>
#include<math.h>
int main()
{
	int try_triangle(double x, double y, double z);
	double a, b, c, s, area;
	
	printf("Please input the lengths of the three sides of the triangle,such as: a,b,c\n");
	scanf_s("%lf,%lf,%lf", &a, &b, &c);
	
	if (try_triangle(a, b, c))//这里其实就是判断try_triangle这个函数的结果是真（1）还是假（0），是真（1）则计算，是假则弹出警告。
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

/*例3.5 求二次方程的根
#include<stdio.h>
#include<math.h>
int main()
{
	int panduan_square(double x, double y, double z);
	double a, b, c, x1, x2, p, q, disc;
	printf("Please input three value,such as:a,b,c\t请注意要切换成英文输入法\n");
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



/*例3.6用 % f输出实数，只能得到6位小数点
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


//例3.8先后输出BOY三个字符:解法1
/*#include<stdio.h>
int main()
{
	char a = 'B', b = 'O', c = 'Y';
	printf("%c%c%c\n", a, b, c);
	return 0;
}
*/

//例3.8先后输出BOY三个字符：解法2
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
/*例3.9 从键盘输入BOY三个字母，并将他们输出到屏幕_解法1
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
//例3.9 从键盘输入BOY三个字母，并将他们输出到屏幕_解法2
/*#include<stdio.h>
int main()
{
	
	putchar(getchar());
	putchar(getchar());
	putchar(getchar());
	return 0;
}
*/

//例3.10 改写例3.3，使其给定一个大写字母，要求用小写字母输出，并用putchar和gerchar命令
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
