
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


//例4.6-1 要求按照考试成绩的等级输出百分制分数段, A等为85 分以上, B等为70~84分, C等为60~69分, D等为60分以下。成绩的等级由键盘输入。
      //请将上面的要求使用C语言编程
/*方法一
#include<stdio.h>
int main()
{
	char grade;
	int high_score , low_score ;
	scanf_s("%c", &grade);
	switch (grade)
	{
	case 'A':
		high_score = 100;
		low_score = 85;
		break;
	case 'B':
		high_score = 84;
		low_score = 70;
		break;
	case 'C':
		high_score = 69;
		low_score = 60;
		break;
	case 'D':
		high_score = 59;
		low_score = 0;
		break;
	default:
		printf("enter data error!\n");
		return 0;//这里必须加入return 0，否则会执行下面的打印语句printf("the score is among %d~%d\n", high_score, low_score);
				//然而这里没有high_score, low_score的值，因此会弹出报错框。
	}
	printf("the score is among %d~%d\n", high_score, low_score);
	return 0;

}
*/

//方法二
//#include <stdio.h>
//
//int main() {
//	char grade;
//	printf("请输入成绩等级（A/B/C/D）：");
//	scanf_s("%c", &grade);
//
//	int score_lower = 0, score_upper = 0;
//	switch (grade) {
//	case 'A':
//		score_lower = 85;
//		score_upper = 100;
//		break;
//	case 'B':
//		score_lower = 70;
//		score_upper = 84;
//		break;
//	case 'C':
//		score_lower = 60;
//		score_upper = 69;
//		break;
//	case 'D':
//		score_lower = 0;
//		score_upper = 59;
//		break;
//	default:
//		printf("输入的成绩等级无效！\n");
//		return 0;
//	}
//
//	printf("分数段为：%d ~ %d 分\n", score_lower, score_upper);
//
//	return 0;
//}




/*例4.6-2 要求按照考试成绩的百分制分数段输出等级，A等为85 分以上, B等为70~84分, C等为60~69分, D等为60分以下。成绩的百分制分数段由键盘输入。
      //请将上面的要求使用C语言编程，要求使用switch语句
//方法一
#include <stdio.h>

int main() {
	int score,a;
	printf("请输入百分制分数段：");
	scanf_s("%d", &score);

	char grade;
	a = score / 10;
	printf("score/10=%d\n", a);
	switch (a) {
	case 10:
	case 9:
		
		grade = 'A';
		printf("grade=%c\n", grade);
		//break;
	case 8:
		printf("zheshi8\n");
		grade = 'B';//在执行完一个 case 标号后面的语句后，就从此标号开始执行下去，不再进行判断例如在例4.6中，如果在各 case子句中没有break 语句，将连续输出.所以这里如果输入99，则直接按顺序执行下去。
		printf("grade=%c\n", grade);
		break;
	case 7:
		grade = 'C';
		break;
	default:
		grade = 'D';
		break;
	}

	printf("等级为：%c\n", grade);

	return 0;
}
*/
/*
//方法二
#include <stdio.h>

int main() {
	int score;
	printf("请输入百分制分数段：");
	scanf("%d", &score);

	char grade;
	if (score >= 85) {
		grade = 'A';
	}
	else if (score >= 70) {
		grade = 'B';
	}
	else if (score >= 60) {
		grade = 'C';
	}
	else {
		grade = 'D';
	}

	printf("等级为：%c\n", grade);

	return 0;
}
*/

/*例4.7 从键盘输入不同字母，执行不同的操作
#include<stdio.h>
int main()
{
	void action1(int, int), action2(int, int);
	char ch;
	int a = 15, b = 23;
	ch = getchar();
	switch (ch)
	{
	case 'A':
	case 'a':
		action1(a, b);
		break;
	case 'b':
	case 'B':
		action2(a, b);
		break;
	default :
		putchar('\a');
	}
	return 0;

}

void action1(int x, int y)
{
	printf("x+y=%d\n", x + y);
}

void action2(int x, int y)
{
	printf("x*y=%d", x * y);
}
*/

/*例4.8 写一个程序，判断某一年是否是闰年
//方法一：
#include<stdio.h>
int main()
{
	int year;
	printf("Please input the year\n");
	scanf_s("%d",&year);
	if (year % 4 == 0 && year % 100 != 0) printf("The %d is 闰年", year);
	else if (year % 400 == 0) printf("The %d is 闰年", year);
	else printf("The %d 不是闰年", year);
	return 0;
	
}

//方法二：
#include<stdio.h>
int main()
{
	int year;
	printf("请输入年份\n");
	scanf_s("%d", &year);
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) printf("The %d 是闰年\n", year);
	else printf("The %d 不是闰年\n", year);
	return 0;

}
*/


/*例4.9 求方程的解
#include<stdio.h>
#include<math.h>
int main()
{
	
	double  a, b, c, disc,x1,x2,realpart,imagpart;
	
	printf("please input the a,b,c\n");
	scanf_s("%lf,%lf,%lf", &a, &b, &c);
	disc = b * b - 4 * a * c;
	printf("输入值是：a=%5.2f,b=%5.2f,c=%5.2f,disc=%5.2f\n", a, b, c, disc);
	if (fabs(a) <= 1e-6)
	{
		x1 = c / b;
		printf("不是二元方程，是一次方程，x1 = %5.2f\n", x1);

	}
	else if (fabs(disc) <= 1e-6)
	{
		x1 = x2 = -b / (2 * a);
		printf("有两个相等的实根：x1=x2=%5.2f\n", x1);

	}
	else if (disc > 1e-6)
	{
		x1 = (-b + sqrt(disc)) / (2 * a);
		x2 = (-b - sqrt(disc)) / (2 * a);
		printf("有两个实根：x1=%5.2f, x2=%5.2f\n", x1, x2);
	}
	else if (disc < 1e-6)
	{
		realpart = -b / (2 * a);
		imagpart = sqrt(-disc) / (2 * a);


		printf("有两个共轭复根:x1 = %5.2f + %5.2fi, x2 =%5.2f - %5.2fi\n ", realpart, imagpart, realpart, imagpart);
	}
	else
		printf("输入错误，a=%5.2f,b=%5.2f,c=%5.2f,disc=%5.2f\n", a, b, c, disc);
	return 0;
}
*/

/*例4.10 求解运费
#include<stdio.h>
int main()
{
	int c, s;
	float p, w, d, f;
	printf("Please enter price,weight,discount:\n");
	scanf_s("%f,%f,%d", &p, &w, &s);
	if (s >= 3000) c = 12;
	else c = s / 250;
	switch (c)
	{
	case 0:d = 0; break;
	case 1:d = 2; break;
	case 2:
	case 3:d = 5; break;
	case 4:
	case 5:
	case 6:
	case 7:d = 8; break;
	case 8:
	case 9:
	case 10:
	case 11:d = 10; break;
	case 12: d = 15; break;
	}
	f = p * w * s * (1 - d / 100);
	printf("freight=%10.2f\n", f);
	return 0;




	}
	*/






