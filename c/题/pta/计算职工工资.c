#include<stdio.h>
struct yu
{
    char a[15];
    double b;
    double c;
    double d;
    double e;
};
int main()
{
    int n,i;
    struct yu a;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s%lf%lf%lf",&a.a,&a.b,&a.c,&a.d);
        a.e=a.c+a.b-a.d;
        printf("%s %.02lf\n",a.a,a.e);
    }
    return 0;
}