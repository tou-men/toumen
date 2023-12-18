#include<stdio.h>
#include<stdlib.h>
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
        putc(ch,stdout);
        ++count;
    }
    fclose(fp);
    printf("\nFile %s has %lu characters.\n",name,count);
    return 0;
}