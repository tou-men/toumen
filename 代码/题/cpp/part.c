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
*/
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




























