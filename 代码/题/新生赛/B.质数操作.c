#include<stdio.h>
#include<math.h>
int f_(int a);
int g_(int a);
int main()
{
    int n,x,g;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x);
        g=(f_(x)+f_(f_(x)))/2;
        if(g_(g)==1) printf("YES\n");
        else if(g_(g)==-1) printf("NO\n");
    }
    //printf("%d %d",f_(n),g_(n));

    return 0;
}
int f_(int a)
{
    do
    {
        a++;
        g_(a);
    } while(g_(a)!=1);
    return a;
}
int g_(int a)
{
    if(a==1) return -1;
    //if(a==2) return 1;
    int flag=1;
    for(int i=2;i<=sqrt(a);i++)
    {
       if(a%i==0)
       {
        flag=-1;
        break;
       } 
    }
    return flag;
}
/*
2
1
2*/