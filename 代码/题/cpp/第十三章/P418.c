#include<stdio.h>
int main()
{
    int ch;
    FILE * fp;
    fp=fopen("第八章.c","r");
    ch=getc(fp);
    while(ch!=EOF)
    {
        putchar(ch);
        ch=getc(fp);
    }
    return 0;
}