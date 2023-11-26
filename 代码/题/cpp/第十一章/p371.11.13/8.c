#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char *string_in(char *a,char *b);
int main()
{
    char a[20]="abcde",b[10]="cde";
    char *p=string_in(a,b);
    int n=strlen(p);
    printf("%d\n",n);
    puts(p);
    return 0;
}
char *string_in(char *a,char *b)
{
    int i=0,j=0,flag=-1;
    while(i<strlen(a)&&j<strlen(b))
    {
        if(a[i]==b[j])
        {
            i++;
            j++;
        } else
        {
            i=i-j+1;
            j=0;
        }
        if(j==strlen(b))
        {
            flag=1;
            break;
        }
    }
    if(flag==1) return &a[i-j];
    else return NULL;
}