#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define SIZE 20
int main(void)
{
    int ch;
    FILE *fp;
    unsigned long count=0;
    char name[SIZE];
    printf("Please enter the file name:");
    scanf("%s",name);
    if((fp=fopen(name,"r"))==NULL)
    {
        printf("Can't open %s file\n",name);
        exit(EXIT_FAILURE);
    }
    while((ch=getc(fp))!=EOF)
    {
        ch=toupper(ch);//转换大写
        putc(ch,stdout);
    }
    fclose(fp);
    return 0;
}