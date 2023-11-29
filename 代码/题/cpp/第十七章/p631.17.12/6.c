#include<stdio.h>
void sort(int a[],int n);
int er(int a[],int n,int x);
int main()
{
    int a[20]={0},n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,n);
    int x;
    scanf("%d",&x);
    int ans=er(a,n,x);
    printf("%d\n",ans);
}
void sort(int a[],int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int t=a[j];
                a[j]=a[i];
                a[i]=t;
            }
        }
    }
}
int er(int a[],int n,int x)
{
    int left=0,right=n;
    if(x<a[0]||x>a[n-1]) return 0;
    while(left<right)
    {
        if(a[left]==x)
        {
            return 1;
        }
        if(a[left+((left+right)/2)]>x) right=left+((left+right)/2)-1;
        else left=left+((left+right)/2);
    }
}