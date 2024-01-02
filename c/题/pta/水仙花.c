#include<stdio.h>
#include<math.h>
int main()
{
    int a,sum=0;
    int n,x;
    scanf("%d",&n);
    if(n>999||n<100)
    {
        printf("Invalid Value.\n");
        return 0;
    }
    x=n;
    while(n)
    {
        a=n%10;
        n/=10;
        sum+=pow(a,3);
    }
    if(sum==x) printf("Yes\n");
    else printf("No\n");
    return 0;
}