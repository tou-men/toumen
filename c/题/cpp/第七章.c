/*
#include<stdio.h>
#define SPACE ' '
int  main(void)
{
    char ch;
    ch=getchar();
    while(ch!='\n')
    {
        if(ch==SPACE) putchar(ch);
        else putchar(ch+1);
        ch=getchar();
    }
    putchar(ch);
    return 0;
}//switch中的continue作用于外部循环
//P214 7.12
#include<stdio.h>
int main()
{
    char ch;
    int enter=0,space=0,other=0;
    while((ch=getchar()!='#'))
    {
        if(ch=='\n') enter++;
        else if(ch==' ') space++;
        else other++;
    }
    printf("enter = %d\n",enter);
    printf("sapce = %d\n",space);
    printf("other = %d\n",other);
    return 0;
}
#include<stdio.h>
#include<math.h>
void p(int a)
{
    int i;
    for(i=2;i<=sqrt(a);i++)
    {
        if(a%i==0)
        {
            i=1;
            break;
        }
    }
    if(i!=1) printf("%d\n",a);
}
int main()
{
    int a,i;
    scanf("%d",&a);
    if(a>2) printf("2\n");
    for(i=3;i<=a;i++)
    {
        p(i);
    }
    return 0;
}
#include<stdio.h>
int main()
{
    char ch;
    int a=0;
    while((ch=getchar())!='#')
    {
        if(a==8)
        {
            a=0;
            printf("\n");
        }
        printf("%c-%d ",ch,ch);
        a++;
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int a,sum=0,count=0,S=0,C=0;
    while(scanf("%d",&a))
    {
        if(a%2==0&&a!=0)
        {
            sum+=a;
            count++;
        } else if(a==0) break;
                else
                {
                    S+=a;
                    C++;
                }  
    }
    double x,y;
    x=sum*1.0/count;
    y=S*1.0/C;
    printf("%d %d\n",sum,S);
    printf("%d %d\n",count,C);
    printf("%lf %lf\n",x,y);
    return 0;
}*/