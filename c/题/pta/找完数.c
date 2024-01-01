#include<stdio.h>
int main()
{
    int a,i,j,b,A[1000]={0},s=0,sum,k=0;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        s=0;
        A[s]=1;
        s++;
        sum=1;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                A[s]=j;
                sum+=j;
                s++;
            }
        }
        if(sum==i)
        {
            k++;
            printf("%d = ",i);
            for(j=0;j<s;j++)
            {
                if(j!=s-1) printf("%d + ",A[j]);
                else printf("%d\n",A[j]);
            }
        }
        
    }
    if(k==0) printf("None\n");
    return 0;
}