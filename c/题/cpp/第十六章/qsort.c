#include<stdio.h>
#include<stdlib.h>
int compare(const void* e1,const void* e2);
int main()
{
    int a[10]={2,3,5,8,7,444,44,54,78,70};
    int b[10];
    qsort(a,10,sizeof(int),compare);
    for(int i=0;i<10;i++) printf("%d ",a[i]);
    return 0;
}
int compare(const void* e1,const void* e2)
{
    int *p1=(int*)e1;
    int *p2=(int*)e2;
    if(*p1>*p2) return 1;
    else if(*p1==*p2) return 0;
    else if(*p1<*p2) return -1;
}