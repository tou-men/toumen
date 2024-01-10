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
/*
#include <stdio.h>
#define LEN 6
int main()
{
    int a[LEN][LEN];
 
    int n;
    scanf("%d", &n);
 
    for(int i = 0; i < n; i++)
    {
            for(int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
 
    int maxIndex, i, j, row;
    for(i = 0; i < n; i++)
    {
        maxIndex = 0;
        for(j = 1; j < n; j++)
        {
            if(a[i][maxIndex] <= a[i][j]) maxIndex = j;
        }
        for(row = 0; row < n; row++)
        {
            if(a[row][maxIndex] < a[i][maxIndex]) break;
        }
        if(row == n)
        {
            printf("%d %d", i, maxIndex);
            break;
        }
    }
    if(i == n)
    {
        printf("NONE");
    }
 
    return 0;
}
 
 *///-------------------------------------------------------------------------------
 /*
 #include<stdio.h>
#include<string.h>
int main(){
	int i,j;
	char s[5][85],t[85];
	for(i=0;i<5;i++)
		scanf("%s",s[i]);
	for(i=0;i<4;i++)
		for(j=0;j<4-i;j++)
			if(strcmp(s[j],s[j+1])>0){
				strcpy(t,s[j]);
				strcpy(s[j],s[j+1]);
				strcpy(s[j+1],t);
			}
	printf("After sorted:\n");
	for(i=0;i<5;i++)
		printf("%s\n",s[i]);
	return 0;
} *///------------------------------------------------------------------------------
/*
#include<stdio.h>
void swap(int *a,int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}
int main()
{
    int i,N,a[15];
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
       scanf("%d",&a[i]); 
    }
    int min=a[0],max=a[0],MAX=0,MIN=0;
    for(i=0;i<N;i++)
    {
        if(a[i]<=min)
        {
            min=a[i];
            MIN=i;
        }
        if(max<=a[i])
        {
            max=a[i];
            MAX=i;
        }
    }
    swap(&a[0],&a[MIN]);
    if(MAX==0) MAX=MIN;
    swap(&a[N-1],&a[MAX]);
    for(i=0;i<N;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}*/