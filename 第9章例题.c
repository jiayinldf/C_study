//�����ṹ����������
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

//�����ṹ������
struct Student
{
	int num; //ѧ��Ϊ����
	char name[20];//����Ϊ�ַ���
	char sex; //�Ա�Ϊ�ַ���
	int age; //����Ϊ����
	float score;//�ɼ�Ϊʵ��
	char addr[30];//��ַΪ�ַ���
};

*/

/*
//��Ա����������һ���ṹ�����ͣ����磺
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

//����9.1 ��һ��ѧ������Ϣ������ѧ�š��������Ա�סַ������һ���ṹ������У�Ȼ��������ѧ������Ϣ��
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

//����9.2 ��������ѧ����ѧ�š������ͳɼ�������ɼ��ϸ�ѧ����ѧ�š������ͳɼ�

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

//����9.3 ��3����ѡ�ˣ�ÿ��ѡ��ֻ��ͶƱѡһ�ˣ�Ҫ���һ��ͳ��ѡƱ�ĳ����Ⱥ����뱻ѡ�˵����֣����������˵�Ʊ�����
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


//�ṹ�������Ӧ�þ���������9.4 ��n��ѧ������Ϣ������ѧ�š��������ɼ�����Ҫ���ճɼ��ĸߵ�˳�������ѧ������Ϣ��
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

//9.3 �ṹ��ָ��
//��ν�ṹ�����ָ��ṹ�������ָ�룬һ���ṹ���������ʼ��ַ��������ṹ�������ָ�롣�����һ���ṹ���������ʼ��ַ����һ��ָ������У���ô���ָ�������ָ��ýṹ�塣




//9.8 �����򵥵ľ�̬��������һ������������3��ѧ�����ݵĽ����ɣ�Ҫ�����������е����ݡ�
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
	struct Student a, b, c, * head, * p;//���������ṹ�������a��b��c����Ϊ����Ľ��
	a.num = 10101; a.score = 89.5;
	b.num = 10103; b.score = 90;
	c.num = 10107; c.score = 85;
	head = &a;
	a.next = &b;
	b.next = &c;
	c.next = NULL;
	p = head;//ʹpָ��a���
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
	struct Student a, b, c, * p;//���������ṹ�������a��b��c����Ϊ����Ľ��
	a.num = 10101; a.score = 89.5;
	b.num = 10103; b.score = 90;
	c.num = 10107; c.score = 85;
	p = &a;
	a.next = &b;
	b.next = &c;
	c.next = NULL;
	//p = head;//ʹpָ��a���
	do
	{
		printf("%ld %5.1f\n", p->num, p->score);
		p = p->next;
	} while (p != NULL);
	return 0;

}
*/


//����9.9 ������̬���� дһ����������һ����3��ѧ�����ݵĵ���̬����


//9.5 ����������
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


//����9.11
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




































