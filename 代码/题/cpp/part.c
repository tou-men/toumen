/*
#include<stdio.h>int main()
{printf("Hellow World!\n"
);  return 0;}*/
/*
#include<stdio.h>
int main()
{
    int n, n2, n3;
    n=5;
    n2=n*n;
    n3=n2*n2;
    printf("n = %d\nn2 = %d\nn3 = %d\n",n,n2,n3);
    return 0;
}*/
/*
#include<stdio.h>
int main()
{
    char a=7;
    a=getchar();
    putchar(a);
    printf("\a");
    return 0;
}*/
//第一章----------------------------------------------------------------------------------------------------------
//P18
/*1.13
#include<stdio.h>
int main()
{
    int c;
    double i;
    scanf("%d",&c);
    i=c*2.54;
    printf("%.3lf",i);
    return 0;
}*/
//第二章-------------------------------------------------------------------------------------------------------
//P37
/*2.12
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",n*365);
    return 0;
}
#include<stdio.h>
void jolly()
{
    printf("For he's a jolly good fellow!\n");
}
void deny()
{
    printf("Whilch nobody can deny!\n");
}
int main()
{
    jolly();
    jolly();
    jolly();
    deny();
    return 0;
}
#include<stdio.h>
void S()
{
    printf("Smile!");
}
int main()
{
    for(int i=3;i>0;i--)
    {
        for(int j=i;j>0;j--)
        {
            S();
        }
        printf("\n");
    }
}*/
//第三章---------------------------------------------------------------------------------------------------
/*P68  3.11
#include<stdio.h>
int main()
{
    char a;
    int x;
    scanf("%d",&x);
    a=x;
    printf("%c\n",a);
    return 0;
}
#include<stdio.h>
int main()
{
    double a;
    scanf("%lf",&a);
    printf("%lf\n",a);
    printf("%e\n",a);
    printf("%A\n",a);
    return 0;
}
#include<stdio.h>
int main()
{
    int y;
    scanf("%d",&y);
    printf("%.6lf\n",y*3.156e7);
    return 0;
}*/
//第四章----------------------------------------------------------------------------------------------------------------------------------
/*
#include<stdio.h>
#include<string.h>
int main()
{
    char a[20];
    scanf("%s",a);
    printf("%d\n",sizeof a);
    printf("%d\n",strlen(a));
    printf("%s\n",a);
    return 0;
}
#include<stdio.h>
int main()
{
    int a=232;
    printf("*%d*\n",a);
    printf("*%1d*\n",a);
    printf("*%10d*\n",a);
    printf("*%-10d*\n",a);
    return 0;
}
#include<stdio.h>
int main()
{
    float n1=3.0;
    double n2=3.0;
    long n3 = 2000000000;
    long n4 = 1234567890;
    printf("%ld %ld %ld %ld\n",n1,n2,n3,n4);
    return 0;
}
#include<stdio.h>
int main()
{
    int a;
    scanf("%*d",1,&a);
    printf("%d\n",a);
    return 0;
}*/
/*P100   4.8
#include<stdio.h>
int main()
{
    char a[20],b[20];
    scanf("%s%s",a,b);
    printf("%s,%s\n",a,b);
    return 0;
}
#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    char a[20];
    scanf("%s",a);
    n=strlen(a);
    printf("\"%s\"\n",a);
    return 0;
}
#include<stdio.h>
#include<string.h>
int main()
{
    char a[20],b[20];
    int A,B;
    scanf("%s%s",a,b);
    printf("%s %s\n",a,b);
    A=strlen(a);
    B=strlen(b);
    printf("%*d %*d\n",A,A,B,B);
    printf("%-*d %-*d\n",A,A,B,B);
    return 0;
}*/
//第五章----------------------------------------------------------------------------------------------------------------
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
//第六章------------------------------------------------------------------------------------------------------------
/*P174   6.16
#include<stdio.h>
int main()
{
    char A[27];
    int i;
    for(i=0;i<27;i++)
    {
        scanf("%c",&A[i]);
    }
    for(i=0;i<27;i++)
    {
        printf("%c ",A[i]);
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("$");
        }
        printf("\n");
    }
    return 0;
}
#include<stdio.h>
int main()
{
    char i,j;
    for(i='F';i>='A';i--)
    {
        for(j='F';j>=i;j--)
        {
            printf("%c",j);
        }
        printf("\n");
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int a,b;
    char c='a';
    for(a=0;a<3;a++)
    {
        for(b=0;b<=a;b++)
        {
            printf("%c",c);
            c++;
        }
        printf("\n");
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int a,b,c,n,N;
    char x;
    scanf("%d",&n);
    N=n;
    for(a=0;a<n;a++)
    {
        for(b=N-1;b>0;b--) printf(" ");
        N--;
        x='A';
        for(b=0;b<=a;b++)
        {
            printf("%c",x);
            x++;
        }
        x-=2;
        for(b=0;b<a;b++)
        {
            printf("%c",x);
            x--;
        }
        printf("\n");
    }
    return 0;
}*/
//第七章----------------------------------------------------------------------------------------
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
//第八章------------------------------------------------------------------------------------------------------------






















































































































































