#include<stdio.h>
int main()
{
    int n,x;
    char ch;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %c",&x,&ch);
        if(x==1)
        {
            if(ch=='E') printf("west is anti-fan\n");
            else printf("east is anti-fan\n");
        }
        if(x%2==0) 
        {
            if(ch=='E') printf("west is anti-fan\n");
            else printf("east is anti-fan\n");
        } else if(x!=1&&x%2!=0)
            {
                if(ch=='E')printf("east is anti-fan\n");
                else printf("west is anti-fan\n");
            }
    }
    return 0;
}