/*
#include<stdio.h>
void up_and_down(int);
int main()
{
    up_and_down(1);
    return 0;
}
void up_and_down(int n)
{
    printf("Level %d: n location %p\n",n,&n);
    if(n<4) up_and_down(n+1);
    printf("LEVEL %d: n location %p\n",n,&n);
}
#include<stdio.h>
void put(unsigned long n);
int main()
{
    unsigned long n;
    scanf("%lu",&n);
    put(n);
}
void put(unsigned long n)
{
    int r;
    r=n%2;
    if(n>=2) put(n/2);
    putchar(r==0 ? '0' : '1');
}*/
//p276 9.11
/*
#include<stdio.h>
double min(double a,double b);
void chine(char a,int i,int j);
int main()
{
    double a,b;
    //scanf("%lf%lf",&a,&b);
    double c=min(a,b);
    //printf("%.3lf\n",c);
    chine('$',2,3);
    return 0;
}
double min(double a,double b)
{
    if(a>b) return b;
    else return a;
}
void chine(char k,int i,int j)
{
    int a,b;
    for(a=0;a<i;a++)
    {
        for(b=0;b<j;b++)
        {
            printf("%c",k);
        }
        printf("\n");
    }
}
#include<stdio.h>
double ti(double a,double b);
int main()
{
    double a,b;
    scanf("%lf%lf",&a,&b);
    double c=ti(a,b);
    printf("%lf\n",c);
    return 0;
}
double ti(double a,double b)
{
    a=1/a;
    b=1/b;
    double c=(a+b)/2;
    c=1/c;
    return c;
}*/