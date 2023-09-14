//建立结构体类型数据
/*
struct Student
{
	int num;
	char name[20];
	char sex;
	int age;
	float score;
	char addr[30];

};

struct Date
{
	int year;
	int month;
	int day;		
};

struct Student
{
	int num;
	char name[20];
	char sex;
	int age;
	struct Date birthday;
	char addr[30];
};
*/
//

/*

//建立结构体类型
struct Student
{
	int num; //学号为整形
	char name[20];//姓名为字符串
	char sex; //性别为字符型
	int age; //年龄为整形
	float score;//成绩为实型
	char addr[30];//地址为字符型
};

*/

/*
//成员可以属于另一个结构体类型，例如：
struct Date
{
	int month;
	int day;
	int year;
};

struct Student
{
	int num;
	char name[20];
	char sex;
	int age;
	struct Date birthday;
	char addr[30];
};

struct Student student1, student2;

*/

//例题9.1 把一个学生的信息（包括学号、姓名、性别、住址）放在一个结构体变量中，然后输出这个学生的信息。
/*
#include<stdio.h>
int main()
{
	struct Student
	{
		long int num;
		char name[20];
		char sex;
		char addr[20];

	}a = {10101,"Li Lin", 'M',"123 Beijing Road"};
	printf("No.:%ld\nname:%s\nsex:%c\naddr:%s\n", a.num, a.name, a.sex, a.addr);
	return 0;
}
*/

//例题9.2 输入两个学生的学号、姓名和成绩，输出成绩较高学生的学号、姓名和成绩

/*

#include <stdio.h>
int main()
{
	struct Student
	{
		int num;
		char name[20];
		float score;
	}student1,student2;
	printf("please input student1's information:\n");
	scanf_s("%d %s %f", &student1.num, student1.name,sizeof(student1.name), &student1.score);
	printf("please input student2's information:\n");
	scanf_s("%d %s %f", &student2.num, student2.name,sizeof(student1.name), &student2.score);
	printf("The higher score is:\n");
	
	if (student1.score>student2.score)
	{
		printf("%d,%s,%6.2f\n", student1.num, student1.name, student1.score);
	}
	else if (student1.score < student2.score)
	{
		printf("%d,%s,%6.2f\n", student2.num, student2.name, student2.score);
	}
	else
	{
		printf("%d,%s,%6.2f\n", student1.num, student1.name, student1.score);
	}
	return 0;


}

*/

/*
#include <stdio.h>
int main()
{
	struct Student
	{
		int num;
		char name[20];
		float score;
	}student1, student2;
	printf("please input student1's information:\n");
	scanf("%d %s %f", &student1.num, student1.name, &student1.score);
	printf("please input student2's information:\n");
	scanf("%d %s %f", &student2.num, student2.name, &student2.score);
	printf("The higher score is:\n");

	if (student1.score > student2.score)
	{
		printf("%d,%s,%6.2f\n", student1.num, student1.name, student1.score);
	}
	else if (student1.score < student2.score)
	{
		printf("%d,%s,%6.2f\n", student2.num, student2.name, student2.score);
	}
	else
	{
		printf("%d,%s,%6.2f\n", student1.num, student1.name, student1.score);
	}
	return 0;


}

*/



/*
#include <stdio.h>

int main() {
	struct Student {
		int num;
		char name[20];
		float score;
	} student1, student2, higherScoreStudent;

	printf("Please input student1's information:\n");
	scanf_s("%d %s %f", &student1.num, student1.name, sizeof(student1.name), &student1.score);

	printf("Please input student2's information:\n");
	scanf_s("%d %s %f", &student2.num, student2.name, sizeof(student2.name), &student2.score);

	if (student1.score > student2.score) {
		higherScoreStudent = student1;
	}
	else {
		higherScoreStudent = student2;
	}

	printf("The higher score is:\n");
	printf("%d %s %f\n", higherScoreStudent.num, higherScoreStudent.name, higherScoreStudent.score);

	return 0;
}
*/

//例题9.3 有3个候选人，每个选民只能投票选一人，要求编一个统计选票的程序，先后输入被选人的名字，最后输出各人得票结果。
/*
#include<stdio.h>
#include<string.h>

struct Person
{
	char name[20];
	int count;
}leader[3] = { "Li",0,"Zhang",0,"Sun",0 };

int main()
{
	int i, j;
	char leader_name[20];
	for ( i = 1; i <=10; i++)
	{
		printf("please input the leader's name:\n");
		scanf("%s", leader_name);
		for ( j = 0; j < 3; j++)
		{
			if (strcmp(leader_name,leader[j].name)==0)
			{
				leader[j].count++;
			}
		}
	}
	printf("\nResult:\n");
	for ( i = 0; i < 3; i++)
	{
		printf("%5s:%d\n", leader[i].name, leader[i].count);
	}
	return 0;
}
*/


//结构体数组的应用举例：例题9.4 有n个学生的信息（包括学号、姓名、成绩），要求按照成绩的高低顺序输出各学生的信息。
/*
#include<stdio.h>
struct Student
{
	int num;
	char name[20];
	float score;
};

int main()
{
	struct Student stu[5] = { {10101,"zhang",78},{10103,"wang",98},{10106,"li",86},{10108,"ling",73.5},{10110,"sun",100}};
	struct Student temp;
	const int n = 5;
	int i, j, k;
	printf("the order is:\n");
	for ( i = 0; i < n-1; i++)
	{
		k = i;
		for ( j = i+1; j < n; j++)
		{
			if (stu[j].score>stu[k].score)
			{
				k = j;
			}temp = stu[k]; stu[k] = stu[i]; stu[i] = temp;
		}

	}
	for ( i = 0; i < n; i++)
	{
		printf("%6d%8s%6.2f\n", stu[i].num, stu[i].name, stu[i].score);

	}
	printf("\n");
	return 0;

}
*/

//9.3 结构体指针
//所谓结构体就是指向结构体变量的指针，一个结构体变量的起始地址就是这个结构体变量的指针。如果把一个结构体变量的起始地址放在一个指针变量中，那么这个指针变量就指向该结构体。




//9.8 建立简单的静态链表：建立一个简单链表，它由3个学生数据的结点组成，要求输出各结点中的数据。
/*
#include<stdio.h>
struct Student
{
	int num;
	float score;
	struct Student * next;
};

int main()
{
	struct Student a, b, c, * head, * p;//定义三个结构体变量，a，b，c，作为链表的结点
	a.num = 10101; a.score = 89.5;
	b.num = 10103; b.score = 90;
	c.num = 10107; c.score = 85;
	head = &a;
	a.next = &b;
	b.next = &c;
	c.next = NULL;
	p = head;//使p指向a结点
	do
	{
		printf("%ld %5.1f\n", p->num, p->score);
		p = p->next;
	} while (p != NULL);
	return 0;

}

*/

/*
#include<stdio.h>
struct Student
{
	int num;
	float score;
	struct Student* next;
};

int main()
{
	struct Student a, b, c, * p;//定义三个结构体变量，a，b，c，作为链表的结点
	a.num = 10101; a.score = 89.5;
	b.num = 10103; b.score = 90;
	c.num = 10107; c.score = 85;
	p = &a;
	a.next = &b;
	b.next = &c;
	c.next = NULL;
	//p = head;//使p指向a结点
	do
	{
		printf("%ld %5.1f\n", p->num, p->score);
		p = p->next;
	} while (p != NULL);
	return 0;

}
*/


//例题9.9 建立动态链表 写一个函数建立一个有3名学生数据的单向动态链表


//9.5 共用体类型
/*
union Data
{
	int i;
	char ch;
	float f;

}a,b,c;


union Data
{
	int i;
	char ch;
	float f;

};
union Data a, b, c;

*/


/*
#include<stdio.h>
union Data
{
	float i;
	char ch;
	float f;

}a;
int main()
{
	a.i = 97.0;
	printf("%5.1f\n", a.i);
	//union Data a = { .ch= 'j' };
	//printf("%c\n", a.ch);

	printf("%f\n", a.f);
	return 0;

}

*/


//例题9.11
/*
#include<stdio.h>
struct 
{
	int num;
	char name[10];
	char sex;
	char job;
	union 
	{
		int clas;
		char position[10];
	}category;
}person[2];

int main()
{
	int i;
	for ( i = 0; i < 2; i++)
	{
		printf("Please enter the data of person:\n");
		scanf("%d %s %c %c",&person[i].num, &person[i].name, &person[i].sex, &person[i].job);
		if (person[i].job == 's')
		{
			scanf("%d",&person[i].category.clas);

		}
		else if (person[i].job == 't')
		{
			scanf("%s",&person[i].category.position);
		}
		else
			printf("Input error!");

	}

	printf("\n");
	printf("No.	name	sex job class/position\n");
	for ( i = 0; i < 2; i++)
	{
		if (person[i].job=='s')
		{
			printf("%-6d%-10s%-4c%-4c%-10d\n", person[i].num, person[i].name, person[i].sex, person[i].job, person[i].category.clas);
		}
		else
		{
			printf("%-6d%-10s%-4c%-4c%-10s\n", person[i].num, person[i].name, person[i].sex, person[i].job, person[i].category.position);
		}
	}

	return 0;

}

*/




































