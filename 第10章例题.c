//��ʮ��
//����10.1
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE * fp;
	char ch, filename[10];
	printf("���������õ��ļ�����\n");
	scanf("%s",filename);
	getchar();
	if ((fp=fopen(filename,"w")) == NULL)
	{
		printf("can not open file\n");
		exit(0);
	}
	printf("������һ��׼���洢�����̵��ַ�������#��������\n");
	ch=getchar();
	while (ch!= '#')
	{
		fputc(ch, fp);
		putchar(ch);
		ch = getchar();
	}
	fclose(fp);
	putchar(10);
	return 0;

}
*/

//����10.2 ��һ�������ļ��е���Ϣ���Ƶ���һ�������ļ��С�Ҫ������������file.dat�ļ��е����ݸ��Ƶ���һ�������ļ�file2.dat�С�
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE* in, * out;
	char ch, infile[10], outfile[10];
	printf("����������ļ������֣�");
	scanf("%s", infile);
	printf("����������ļ������֣�");
	scanf("%s", outfile);
	if ((in=fopen(infile,"r"))==NULL)
	{
		printf("�޷��򿪴��ļ�\n");
		exit(0);
	}
	if ((out = fopen(outfile, "w")) == NULL)
	{
		printf("�޷��򿪴��ļ�\n");
		exit(0);
	}
	ch = fgetc(in);//�������ļ�����һ���ַ�����ֵ������ch
	while (!feof(in))
	{
		fputc(ch, out); 
		putchar(ch);
		ch = fgetc(in);
	}
	putchar(10);
	fclose(in);
	fclose(out);
	return 0;

}
*/

//����10.3 �Ӽ��̶������ɸ��ַ����������ǰ���ĸ��С��˳������Ȼ����ź�����ַ����͵������ļ��б��档
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE* fp;
	char str[3][10], temp[10];
	int i, j, k, n = 3;
	printf("Enter strings:\n");
	for (i = 0; i < n - 1; i++)
	{
		gets(str[i]);

	}
	for ( i = 0; i < n-1; i++)
	{
		k = i;
		for (j = i + 1; j < n; j++)
		{
			if (strcmp(str[k], str[j]) > 0)
			{
				k = j;
			}
		}
		if (k!=i)
		{
				strcpy(temp, str[i]);
				strcpy(str[i], str[k]);
				strcpy(str[k], temp);
		}
		
		
		
	}


	if ((fp = fopen("C:\\MyProgram\\C_study\\string.dat", "w")) == NULL)
	{
		printf("can't open file!\n");
		exit(0);
	}
	printf("\nThe new sequence:\n");
	for (i = 0; i < n; i++)
	{
		fputs(str[i], fp);
		fputs("\n", fp);
		printf("%s\n", str[i]);
	}

	fclose(fp); // �ر��ļ�
	return 0;
}
*/
<<<<<<< HEAD


/*
=======
>>>>>>> 2fb536ab9771ed7a6d6b635e15794a56aa33834f
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	FILE* fp;
	char str[3][10], temp[10];
	int i, j, k, n = 3;
	printf("Enter strings:\n");

	for (i = 0; i < n; i++) {
		fgets(str[i], sizeof(str[i]), stdin);
		// ɾ��ĩβ�Ļ��з�
		if (str[i][strlen(str[i]) - 1] == '\n') {
			str[i][strlen(str[i]) - 1] = '\0';
		}
	}

	for (i = 0; i < n - 1; i++) {
		k = i;
		for (j = i + 1; j < n; j++) {
			if (strcmp(str[k], str[j]) > 0) {
				k = j;
			}
		}
		if (k != i) {
			strcpy(temp, str[i]);
			strcpy(str[i], str[k]);
			strcpy(str[k], temp);
		}
	}

	if ((fp = fopen("C:\\MyProgram\\C_study\\string.dat", "w")) == NULL) {
		printf("Can't open file!\n");
		exit(0);
	}

	printf("\nThe new sequence:\n");
	for (i = 0; i < n; i++) {
		fputs(str[i], fp);
		fputs("\n", fp);
		printf("%s\n", str[i]);
	}

	fclose(fp); // �ر��ļ�

	return 0;
}

*/

//����10.4 �Ӽ�������10��ѧ�����й����ݣ�Ȼ�������ת�浽�����ļ���ȥ��
#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
struct Student_type
{
	char name[10];
	int num;
	int age;
	char addr[15];
}stud[SIZE];

int main()
{
	int i;
	FILE *fp;
	if ((fp=fopen("stu.dat","rb")) == NULL)
	{
		printf("cannot open file\n");
		exit(0);
	}
	for ( i = 0; i < SIZE; i++)
	{
		fread(&stud[i], sizeof(struct Student_type), 1, fp);
		printf("%-10s %4d %4d %-15s\n", stud[i].name, stud[i].num, stud[i].age, stud[i].addr);
	}
	fclose(fp);
	return 0;
}

