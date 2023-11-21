/*P174   6.16
#include<stdio.h>
int main()
{
    char A[27];
    int i;
    for(i=0;i<27;i++)
    {
        scanf("%c",&A[i]);
    }
    for(i=0;i<27;i++)
    {
        printf("%c ",A[i]);
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("$");
        }
        printf("\n");
    }
    return 0;
}
#include<stdio.h>
int main()
{
    char i,j;
    for(i='F';i>='A';i--)
    {
        for(j='F';j>=i;j--)
        {
            printf("%c",j);
        }
        printf("\n");
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int a,b;
    char c='a';
    for(a=0;a<3;a++)
    {
        for(b=0;b<=a;b++)
        {
            printf("%c",c);
            c++;
        }
        printf("\n");
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int a,b,c,n,N;
    char x;
    scanf("%d",&n);
    N=n;
    for(a=0;a<n;a++)
    {
        for(b=N-1;b>0;b--) printf(" ");
        N--;
        x='A';
        for(b=0;b<=a;b++)
        {
            printf("%c",x);
            x++;
        }
        x-=2;
        for(b=0;b<a;b++)
        {
            printf("%c",x);
            x--;
        }
        printf("\n");
    }
    return 0;
}*/