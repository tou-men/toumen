#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[100];
    int i,j;
    for(i=0;i<100;i++)
    {
        a[i]=rand()%11;
    }
    for(i=0;i<100;i++)
    {
        for(j=i+1;j<100;j++)
        {
            if(a[j]>a[i])
            {
                int t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    for(i=0;i<100;i++)
    {
        printf("%d ",a[i]);
        if(i%20==0) printf("\n");
    }
    return 0;
}//生成100个1～10的随机数字并且降序排列