/*
#include<stdio.h>
#include<math.h>
int pows(int a,int b)
{
    int i,j;
    j=a;
    for(i=1;i<b;i++)
    {
        a*=j;
    }
    return a;
}
int main()
{
    int i,N,a,b,sum;
    scanf("%d",&N);
    for(i=pow(10,N-1);i<pow(10,N);i++)
    {
        sum=0;
        a=i;
        while(a>0)
        {
            b=a%10;
            sum+=pows(b,N);
            a/=10;
        }
        if(sum==i) printf("%d\n",sum);
    }
    return 0;
}*/
/*
#include<stdio.h>
int main()
{
    int x,i,j,k;
    int count=0;
    scanf("%d",&x);
    for(i=x/5;i>0;i--)
    {
        for(j=(x-i)/2;j>0;j--)
        {
           k=x-5*i-2*j;
           if(5*i+2*j+k==x&&k>0)
            {
                    printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n",i,j,k,i+j+k);
                    count++;
            }
        }
    }
    printf("count = %d\n",count);
    return 0;
}*/
/*
#include<stdio.h>
int main()
{
    int m,n,i;
    scanf("%d%d",&m,&n);
    double sum=0;
    for(i=m;i<=n;i++)
    {
        sum+=(i*i)*1.0+1.0/i;
    }
    printf("sum = %.6lf\n",sum);
    return 0;
}*/
/*
#include<stdio.h>
int main()
{
    int X,N;
    scanf("%d%d",&X,&N);
    int g,c=0;
    do
    {
        scanf("%d",&g);
        c++;
        if(g<0||c==N)
        {
            //printf("Game Over\n")
            break;
        }
        if(g>X) printf("Too big\n");
        else if(g<X) printf("Too small\n");
        else break;
    } while(g!=X);
    if(c<=3) printf("Lucky You!\n");
    else if(c>3&&c<=N) printf("Good Guess!\n");
    if(g<0||c==N)
        {
            printf("Game Over\n");
        }
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int x=1,N;
    scanf("%d",&N);
    for(int i=1;i<N;i++)
    {
        x=(x+1)*2;
    }
    printf("%d\n",x);
    return 0;
}*/

//dqd



















