#include<stdio.h>
#include<string.h>
#include<math.h>
int rotate_(int x,int n);
int main()
{
    unsigned int a,b;
    scanf("%u%u",&a,&b);
    unsigned int c=rotate_(a,b);
    printf("%u\n",c);
    return 0;
}
int rotate_(int x,int n)
{
    int wei[10];
    int re[10];
    int a=0,i=0;
    while(x)
    {
        a=x%10;
        wei[i]=a;
        i++;
        x/=10;
    }
    int b=i,j;
    j=b-1;
    // for(i=0;i<b;i++)
    // printf("%d ",wei[i]);
    for(i=0;i<b;i++)
    {
        re[i]=wei[j];
        j--;
    }
    // for(i=0;i<b;i++)
    // printf("%d ",re[i]);
    for(i=0;i<n;i++)
    {
        int k=re[0];
        for(j=0;j<b-1;j++) re[j]=re[j+1];
        re[b-1]=k;
    }
    int sum=0,xy=b;
    for(i=0;i<xy;i++)
    {
        sum+=pow(10,b-1)*re[i];
        b--;
    }
    return sum;
}