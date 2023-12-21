#include<stdio.h>
struct ren
{
    char a[10];
    int b;
    char c[20];
};
int main()
{
    int n,i,j;
    scanf("%d",&n);
    struct ren d[10];
    for(i=0;i<n;i++)
    {
        scanf("%s%d%s",&d[i].a,&d[i].b,&d[i].c);
    }
    int max,Max;
    for(i=0;i<n;i++)
    {
        max=d[i].b,Max=i;
        for(j=i+1;j<n;j++)
        {
            if(d[j].b<max) 
            {
                max=d[j].b;
                Max=j;
            }
        }
        struct ren e=d[Max];
        d[Max]=d[i];
        d[i]=e;
    }
    for(i=0;i<n;i++)
    {
        printf("%s %d %s\n",d[i].a,d[i].b,d[i].c);
    }
    return 0;
}