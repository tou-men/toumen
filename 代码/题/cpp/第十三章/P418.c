#include<stdio.h>
int main()
{
    int ch;
    FILE * fp;
    fp=fopen("文件.c","r");
    ch=getc(fp);
    while(ch!=EOF)
    {
        putchar(ch);
        ch=getc(fp);
    }
    //printf("\n");
    return 0;
}