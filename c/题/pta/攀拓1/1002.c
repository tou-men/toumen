#include<stdio.h>
int main()
{
    char c;
    int sum=0;
    scanf("%c",&c);
    while(c!='\n')
    {
        sum+=c-'0';
        scanf("%c",&c);
    }
    int a=0;
    char ch[100]={-1};
    int i=0;
    while(sum)
    {
        a=sum%10;
        ch[i]=a;
        i++;
        sum/=10;
    }
    i--;
    //i=0;
    while(i>-1)
    {
        switch(ch[i])
        {
            case 0:
                printf("ling");
                break;
            case 1 :
                printf("yi");
                break;
            case 2:
                printf("er");
                break;
            case 3 :
                printf("san");
                break;
            case 4:
                printf("si");
                break;
            case 5 :
                printf("wu");
                break;
            case 6:
                printf("liu");
                break;
            case 7 :
                printf("qi");
                break;
            case 8:
                printf("ba");
                break;
            case 9:
                printf("jiu");
                break;
        }
        i--;
        if(i!=-1) printf(" ");
    }
    printf("\n");
    return 0;
}