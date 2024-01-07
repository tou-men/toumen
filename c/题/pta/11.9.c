/*
#include<stdio.h>
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	int a[m];
	for(int i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		int x = a[m-1];
		for(int j=0;j<=m;j++)
		{
			a[m-j] = a[m-j-1];
		}
		a[0] = x;
	}
	for(int i=0;i<m;i++)
	{
		printf("%d",a[i]);
		if(i!=m-1)printf(" "); 
	}
}
*///-------------------------------------------------
/*
#include<stdio.h>
#include<string.h>
int main()
{
    char a[10000];
    int i=0;
    while(scanf("%s",a)==1) i++;
    printf("%d",i);
    return 0;
}*///------------------------------------------------------------
/*
#include <stdio.h>
int main()
{
    int t,n,i,j,x;
	
    scanf("%d",&t);
    
    for(x=0;x<t;x++)
    {
        int f=0;
        scanf("%d",&n);
        int a[16][16];
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++) scanf("%d",&a[i][j]);
        }

        for(i=0;i<n;i++)
        {
            for(j=0;j<i;j++)
            {
                if(a[i][j]!=0)
				{
					
					f=1;
                    break;
                }
            }
        }
        if(f==1) printf("NO\n");
        if(f==0) printf("YES\n");
    }
    return 0;
}
*///------------------------------------------------------------------------------------