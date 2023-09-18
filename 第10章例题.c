//第十章
//例题10.1
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE * fp;
	char ch, filename[10];
	printf("请输入所用的文件名：\n");
	scanf("%s",filename);
	getchar();
	if ((fp=fopen(filename,"w")) == NULL)
	{
		printf("can not open file\n");
		exit(0);
	}
	printf("请输入一个准备存储到磁盘的字符串（以#结束）：\n");
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

//例题10.2 将一个磁盘文件中的信息复制到另一个磁盘文件中。要求将上例建立的file.dat文件中的内容复制到另一个磁盘文件file2.dat中。
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE* in, * out;
	char ch, infile[10], outfile[10];
	printf("请输入读入文件的名字：");
	scanf("%s", infile);
	printf("请输入输出文件的名字：");
	scanf("%s", outfile);
	if ((in=fopen(infile,"r"))==NULL)
	{
		printf("无法打开此文件\n");
		exit(0);
	}
	if ((out = fopen(outfile, "w")) == NULL)
	{
		printf("无法打开此文件\n");
		exit(0);
	}
	ch = fgetc(in);//从输入文件读入一个字符，赋值给变量ch
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

//例题10.3 从键盘读入若干个字符串，对他们按字母大小的顺序排序，然后把排好序的字符串送到磁盘文件中保存。
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

	fclose(fp); // 关闭文件
	return 0;

}