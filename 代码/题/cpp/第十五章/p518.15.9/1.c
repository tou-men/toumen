#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char p[20];//1+4+8+16+32==61
    scanf("%s",p);
    int n=strlen(p);
    printf("%d\n",n);
    int sum=0,i;
    for(i=0;i<n;i++)
    {
        if(p[i]=='1') sum+=pow(2,n-i-1);
        else continue;
    }
    printf("%s转化为十进制是%d\n",p,sum);
    return 0;
}//二进制字符串转换十进制