
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
