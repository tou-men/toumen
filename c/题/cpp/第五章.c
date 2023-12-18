/*P134  5.11
#include<stdio.h>
const int M=60;
int main()
{
    int m;
    do 
    {
        scanf("%d",&m);
        int i=m%M;
        int I=m/M;
        printf("%02d:%02d\n",I,i);
    } while(m>=60);
    return 0;
}
#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=n;i<=10+n;i++)
    {
        printf("%d\n",i);
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int n;
    do
    {
        scanf("%d",&n);
        int a,b;
        a=n/7;
        b=n%7;
        printf("%d周%d天",a,b);
    } while (n>0);
    return 0;   
}*/