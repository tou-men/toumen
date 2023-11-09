/*
第一题
#include<stdio.h>
int main()
{
	int a[25][25]={0},i,n,x,j;
	scanf("%d",&x);
	int t=x;
	for(i=1;i<=x;i++)
	{
		for(n=t-1;n>0;n--)
			{
				printf(" ");
			}
		t--;
		for(j=1;j<=i;j++)
		{
			if(i==1&&j==1)
			{
				a[1][1]=1;
				printf("%4d",a[1][1]);
				break;
			}
		a[i][j]=a[i-1][j-1]+a[i-1][j];
		printf("%4d",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
第二题
#include<stdio.h>
int main()
{
    int a[105]={0},n,k,i,j;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<k;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                int y=a[j];
                a[j]=a[j+1];
                a[j+1]=y;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(i!=n-1) printf("%d ",a[i]);
        else printf("%d",a[i]);
    }
    return 0;
}*/




