#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
    FILE *fp;
    int i;
    char ch;
    if(argc==1)
    {
        fprintf(stderr,"Please enter file name");
        exit(EXIT_FAILURE);
    }
    for(i=1;i<argc;i++)
    {
        if((fp=fopen(argv[i],"r"))==NULL)
        {
            fprintf(stderr,"Can's open %s file",argv[i]);
            exit(EXIT_FAILURE);
        }
        printf("This content of file %s is:\n",argv[i]);
        while((ch=getc(fp))!=EOF) putchar(ch);
        printf("\n");
        fclose(fp);
    }
    return 0;
}