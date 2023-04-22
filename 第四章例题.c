
/*例4.2输入两个实数，按由小到大的顺序输出这两个数
#include<stdio.h>
int main()
{
	float a, b, c;
	printf("Please input two value,such as: a,b\n");
	scanf_s("%f,%f", &a, &b);
	if (a > b)
	{
		c = b;
		b = a;
		a = c;
		printf("%7.2f,%7.2f\n", a, b);
	}
	else
		printf("%7.2f,%7.2f\n", a, b);

	return 0;



}
*/


/*例4.3 输入3个数a, b, c 要求按由小到大的顺序输出_方法1 - 最原始的方法逐个对比，但是只限于三个数以内的，
      //4个及以上就看起来非常麻烦了。所以通用的方法应该是用下面的方法2（冒泡排序）进行解题，还有最高效的方法3（快速排序）。
#include<stdio.h>
int main()
{
	float a, b, c, t;
	printf("Please input three value,such as: a,b,c\n");
	scanf_s("%f,%f,%f", &a, &b, &c);
	if (a > b)
	{
		t = b;
		b = a;
		a = t;
	}
	if (a > c)
	{
		t = c;
		c = a;
		a = t;
	}
	if (b > c)
	{
		t = b;
		b = c;
		c = t;
	}
	printf("%f,%f,%f\n",a, b, c);
	return 0;
}


//方法2-冒泡排序算法（我又不赶时间，就是训练大脑，所以应该不慌不忙静下心来把这个问题解决了，
      //花1天时间解决了也是收货，总比花1天时间干了都是自己会的东西要更有价值吧，既然都到了这一步了，
      //择日不如撞日，学了这个冒泡和快速算法得了~）




//方法3-快速排序算法

*/

/*例4.4 输入字母，若为大写则转化为小写并输出，若为小写则直接输出。
#include<stdio.h>
int main()
{
	char a, b;
	printf("please in put a letter,such as: a or a\n");
	scanf_s("%c",&a);
	b = (a >= 'a' && a <= 'z') ? (a+32) : (a);
	printf("the output is %c", b);
	return 0;
}

//方法二
#include<stdio.h>
int main()
{
	char cha;
	printf("Please in put a letter,such as: A or a\n");
	scanf_s("%c", &cha);
	cha = (cha >= 'A' && cha <= 'Z') ? (cha + 32) : (cha);
	printf("The output is %c", cha);
	return 0;
}
*/


/*例4.5 阶跃函数
#include<stdio.h>

int main()
{
	
	double a;
	int y;
	int step(double x);
	printf("please input x\n");
	scanf_s("%lf", &a);
	y = step(a);
	printf("the x = %5.2f, y = %d", a, y);
	return 0;


}

int step(double x)

{
	int y;
	if (x < 0) y = -1;
	else 
	{
		if (x == 0) y = 0;
		else y = 1;
	} 
	return y;
}


//方法二 修改if条件语句
#include<stdio.h>

int main()
{

	double a;
	int y;
	int Step(double x);
	printf("Please input x\n");
	scanf_s("%lf", &a);
	y = Step(a);
	printf("The x = %5.2f, y = %d", a, y);
	return 0;


}

int Step(double x)

{
	int y;
	if (x < 0) y = -1;
	else if (x == 0) y = 0;
	else y = 1;

	return y;
}
*/
