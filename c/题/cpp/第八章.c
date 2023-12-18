/*
#include<stdio.h>
int main()
{
    int ch;
    while((ch=getchar())!=EOF) putchar(ch);
    printf("over!");
    return 0;
}
#include<stdio.h>//file_eof.c --打开一个文件并显示该文件
#include<stdlib.h>
int main()
{
    int ch;
    FILE * fp;
    char fname[50];//储存文件名
    printf("Enter the name of the file: ");
    scanf("%s",fname);
    fp = fopen(fname,"r");//打开待读取文件
    if(fp == NULL)   //如果失败
    {
        printf("Failed to open file. Bye\n");
        exit(1);
    }
    //getc(fp)从打开的文件中获取一个字符
    while((ch=getc(fp))!=EOF) putchar(ch);
    fclose(fp);//关闭文件
    return 0;
}
#include<stdio.h>
int main()
{
    int guess = 0;
    char ch;
    while((ch=getchar())!='y')
    {
        guess++;
        printf("NO this %d\n",guess);
        while(getchar()!='\n') continue;
    }
    if(ch=='y') printf("yes\n");
    return 0;
}
*/
//P241    8.11
/*
#include<stdio.h>
int main()
{
    char ch;
    int a=0;
    while((ch=getchar())!=EOF)
    {
        a++;
        while(getchar()!='\n') continue;    
    }
    if(a!=0)
    {
        printf("all is %d\n",a);
        return 0;
    }
    else return 0;
}
#include<stdio.h>
int main()
{
    char ch;
    while((ch=getchar())!=EOF)
    {
        printf("%d %c\n",ch,1);
        while(getchar()!='\n') continue;
    }
    return 0;
}
*/