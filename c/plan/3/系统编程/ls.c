#include<stdio.h>
#include<dirent.h>
void my_ls(char *dirname);
void main(int argc,char *argv[])
{
    if(argc==1) my_ls(".");
    else while(--argc)
            {
                printf("%s\n",* ++argv);
                my_ls(*argv);
            }
}
void my_ls(char *dirname)
{
    DIR * dir_pt;
    struct dirent *direntp;
    if((dir_pt = opendir(dirname))==NULL)
        fprintf(stderr,"can not open %s\n",dirname);
        else 
        {
            while((direntp=readdir(dir_pt))!=NULL)
            printf("%s\n",direntp->d_name);
            closedir(dir_pt);
        }
}