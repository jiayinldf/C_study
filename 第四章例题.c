
/*��4.2��������ʵ��������С�����˳�������������
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


/*��4.3 ����3����a, b, c Ҫ����С�����˳�����_����1 - ��ԭʼ�ķ�������Աȣ�����ֻ�������������ڵģ�
      //4�������ϾͿ������ǳ��鷳�ˡ�����ͨ�õķ���Ӧ����������ķ���2��ð�����򣩽��н��⣬�������Ч�ķ���3���������򣩡�
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


//����2-ð�������㷨�����ֲ���ʱ�䣬����ѵ�����ԣ�����Ӧ�ò��Ų�æ��������������������ˣ�
      //��1��ʱ������Ҳ���ջ����ܱȻ�1��ʱ����˶����Լ���Ķ���Ҫ���м�ֵ�ɣ���Ȼ��������һ���ˣ�
      //���ղ���ײ�գ�ѧ�����ð�ݺͿ����㷨����~��




//����3-���������㷨

*/

/*��4.4 ������ĸ����Ϊ��д��ת��ΪСд���������ΪСд��ֱ�������
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

//������
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


/*��4.5 ��Ծ����
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


//������ �޸�if�������
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


//��4.6-1 Ҫ���տ��Գɼ��ĵȼ�����ٷ��Ʒ�����, A��Ϊ85 ������, B��Ϊ70~84��, C��Ϊ60~69��, D��Ϊ60�����¡��ɼ��ĵȼ��ɼ������롣
      //�뽫�����Ҫ��ʹ��C���Ա��
/*����һ
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
		return 0;//����������return 0�������ִ������Ĵ�ӡ���printf("the score is among %d~%d\n", high_score, low_score);
				//Ȼ������û��high_score, low_score��ֵ����˻ᵯ�������
	}
	printf("the score is among %d~%d\n", high_score, low_score);
	return 0;

}
*/

//������
//#include <stdio.h>
//
//int main() {
//	char grade;
//	printf("������ɼ��ȼ���A/B/C/D����");
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
//		printf("����ĳɼ��ȼ���Ч��\n");
//		return 0;
//	}
//
//	printf("������Ϊ��%d ~ %d ��\n", score_lower, score_upper);
//
//	return 0;
//}




/*��4.6-2 Ҫ���տ��Գɼ��İٷ��Ʒ���������ȼ���A��Ϊ85 ������, B��Ϊ70~84��, C��Ϊ60~69��, D��Ϊ60�����¡��ɼ��İٷ��Ʒ������ɼ������롣
      //�뽫�����Ҫ��ʹ��C���Ա�̣�Ҫ��ʹ��switch���
//����һ
#include <stdio.h>

int main() {
	int score,a;
	printf("������ٷ��Ʒ����Σ�");
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
		grade = 'B';//��ִ����һ�� case ��ź�������󣬾ʹӴ˱�ſ�ʼִ����ȥ�����ٽ����ж���������4.6�У�����ڸ� case�Ӿ���û��break ��䣬���������.���������������99����ֱ�Ӱ�˳��ִ����ȥ��
		printf("grade=%c\n", grade);
		break;
	case 7:
		grade = 'C';
		break;
	default:
		grade = 'D';
		break;
	}

	printf("�ȼ�Ϊ��%c\n", grade);

	return 0;
}
*/
/*
//������
#include <stdio.h>

int main() {
	int score;
	printf("������ٷ��Ʒ����Σ�");
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

	printf("�ȼ�Ϊ��%c\n", grade);

	return 0;
}
*/

/*��4.7 �Ӽ������벻ͬ��ĸ��ִ�в�ͬ�Ĳ���
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

/*��4.8 дһ�������ж�ĳһ���Ƿ�������
//����һ��
#include<stdio.h>
int main()
{
	int year;
	printf("Please input the year\n");
	scanf_s("%d",&year);
	if (year % 4 == 0 && year % 100 != 0) printf("The %d is ����", year);
	else if (year % 400 == 0) printf("The %d is ����", year);
	else printf("The %d ��������", year);
	return 0;
	
}

//��������
#include<stdio.h>
int main()
{
	int year;
	printf("���������\n");
	scanf_s("%d", &year);
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) printf("The %d ������\n", year);
	else printf("The %d ��������\n", year);
	return 0;

}
*/


/*��4.9 �󷽳̵Ľ�
#include<stdio.h>
#include<math.h>
int main()
{
	
	double  a, b, c, disc,x1,x2,realpart,imagpart;
	
	printf("please input the a,b,c\n");
	scanf_s("%lf,%lf,%lf", &a, &b, &c);
	disc = b * b - 4 * a * c;
	printf("����ֵ�ǣ�a=%5.2f,b=%5.2f,c=%5.2f,disc=%5.2f\n", a, b, c, disc);
	if (fabs(a) <= 1e-6)
	{
		x1 = c / b;
		printf("���Ƕ�Ԫ���̣���һ�η��̣�x1 = %5.2f\n", x1);

	}
	else if (fabs(disc) <= 1e-6)
	{
		x1 = x2 = -b / (2 * a);
		printf("��������ȵ�ʵ����x1=x2=%5.2f\n", x1);

	}
	else if (disc > 1e-6)
	{
		x1 = (-b + sqrt(disc)) / (2 * a);
		x2 = (-b - sqrt(disc)) / (2 * a);
		printf("������ʵ����x1=%5.2f, x2=%5.2f\n", x1, x2);
	}
	else if (disc < 1e-6)
	{
		realpart = -b / (2 * a);
		imagpart = sqrt(-disc) / (2 * a);


		printf("�����������:x1 = %5.2f + %5.2fi, x2 =%5.2f - %5.2fi\n ", realpart, imagpart, realpart, imagpart);
	}
	else
		printf("�������a=%5.2f,b=%5.2f,c=%5.2f,disc=%5.2f\n", a, b, c, disc);
	return 0;
}
*/

/*��4.10 ����˷�
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






