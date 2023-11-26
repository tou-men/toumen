#include<stdio.h>
#include<stdlib.h>
char *W_scanf(int a);
int main()
{
    int n;
    scanf("%d",&n);
    char *p=W_scanf(n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",p[i]);
    }
    return 0;
}
char *W_scanf(int a)
{
    char *p=malloc(a*sizeof(char));
    for(int i=0;i<a;i++)
    {
        scanf("\n%c",&p[i]);
    }
    return p;
}