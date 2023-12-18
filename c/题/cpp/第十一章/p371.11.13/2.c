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
    int x;
    x=0;
    char *p=malloc(a*sizeof(char));
    *p=getchar();
    while((p[x]=getchar())!='\n')
    {
        if(p[x]=='\t'||x==a) break;
        //*p=getchar();
        x++;
    }
    return p;
}