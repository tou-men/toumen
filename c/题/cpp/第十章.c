//p318 10.13
/*
#include<stdio.h>
void copy_arr(double a[],double b[],int x);
void copy_ptr(double *a,double b[],int x);
void copy_ptrs(double a[],double b[],double *x);
int main()
{
    double source[15]={1.1,2.2,3.3,4.4,5.5};
    double target1[10];
    double target2[10];
    double target3[10];
    copy_arr(target1,source,5);
    copy_ptr(target2,source,5);
    copy_ptrs(target3,source,source+5);
    for(int i=0;i<5;i++) printf("%lf ",target3[i]);
    printf("\n");
    return 0;
}
void copy_arr(double a[],double b[],int x)
{
    int i;
    for(i=0;i<x;i++) a[i]=b[i];
}
void copy_ptr(double *a,double b[],int x)
{
    int i=0;
    while(i!=x)
    {
        *a=b[i];
        a++;
        i++;
    }
}
void copy_ptrs(double a[],double b[],double *x)
{
    while(*b!=*x) *(a++)=*(b++);
}
#include<stdio.h>
int my_max(int a[],int n);
int main()
{
    int a[5]={1,2,3,4,5};
    int max=my_max(a,5);
    printf("%d\n",max);
    return 0;
}
int my_max(int a[],int n)
{
    int i,max=a[0];
    for(i=1;i<5;i++)
    {
        if(a[i]>max) max=a[i];
    }
    return max;
}
#include<stdio.h>
int myM(double a[],int n);
int main()
{
    double a[4]={1.1,33.2,3.3,4.4};
    int max=myM(a,4);
    printf("\n%d\n",max);
    return 0;
}
int myM(double a[],int n)
{
    int i,X=0;
    double x=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>x)
        {
            double t=a[i];
            a[i]=x;
            x=t;
            X=i;
        }
        //printf("%d ",i);
    }
    return X;
}*/