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