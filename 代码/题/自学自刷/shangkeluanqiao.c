/*
#include <stdio.h>
int main()
{
    printf("abc\n");
    return 0;
}*/
/*
#include<stdio.h>
typedef union 
{
    int i;
    char ch[sizeof(int)];
}CHI;
int maim()
{
    CHI chi;    
    int i;
    chi.i=1234;
    for(i=0;i<sizeof(int);i++)
    {
        printf("%02hhX\n",chi.ch[i]);
    }
    return 0;
}
P1554
#include<stdio.h>
int main()
{
    int a,b,i,j;
    scanf("%d%d",&a, &b);
    int c[10]={0};
    for(i=a;i<=b;i++)
    {
        j=i;
        while(j>0)
        {
            c[j%10]++;
            j/=10;
        }
    }
    for(i=0;i<10;i++)
    {
        if(i!=10) printf("%d ",c[i]);
        else printf("%d",c[i]);
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int a[10]={1,22,33,44,5,6,7,88,9,25},t,i,j;
    
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<len-1;i++)
    {
        t=i;
        for(j=i+1;j<10;j++)
        {
            if(a[j]<a[t])
            {
                t=j;
            }
        }
        if(t!=i)
        {
            int y=a[i];
            a[i]=a[t];
            a[t]=y;
        }
    }
    for(i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char *convert(const char *s)
{
    int i,len=strlen(s);//求字符串长度
    char *RESULT=(char*)malloc((len+1)*sizeof(char));
    //申请内存
    strcpy(RESULT,s);//拷贝字符串
    for(i=0;i<len;i++)
    {
        if(RESULT[i]>='a'&& RESULT[i]<='z') RESULT[i]-=32;
        else if(RESULT[i]>='A'&& RESULT[i]<='Z') RESULT[i]+=32;
    //转换大小写
    }
    return RESULT;
}
int main(void) 
{
    char *str = "XiyouLinux Group 2022";
    char *temp = convert(str);
    puts(temp);
    free(temp);
    return 0;
}*/
/*
#include<stdio.h>
int main()
{
    int o,c,h,l;
    scanf("%d %d %d %d",&o,&c,&h,&l);
    if(c<o)
    {
        if(l<o&&l<c&&h>o&&h<c||l<o&&l<c&&h<o&&h<c||l<o&&l<c&&h<o&&h>c)
        printf("BW-Soild with Lower Shadow");
        else if(h>o&&h>c&&l<o&&l>c||h>o&&h>c&&l>o&&l<c||h>o&&h>c&&l>o&&l>c)
                printf("BW-Soild with Upper Shadow");
                else if("l<o&&l<c&&h>o&&h>c")
printf("BW-Soild with Lower Shadow and Upper Shadow");
else
printf("BW-Soild");
}
else if(c>o)
{
if(l<o&&l<c&&h>o&&h<c||l<o&&l<c&&h<o&&h<c||l<o&&l<c&&h<o&&h>c)
printf("R-Hollow with Lower Shadow");
else if(h>o&&h>c&&l<o&&l>c||h>o&&h>c&&l>o&&l<c||h>o&&h>c&&l>o&&l>c)
printf("R-Hollow with Upper Shadow");
else if("l<o&&l<c&&h>o&&h>c")
printf("R-Hollow with Lower Shadow and Upper Shadow");
else
printf("R-Hollow");
}
else
{
if(l<o&&l<c&&h>o&&h<c||l<o&&l<c&&h<o&&h<c||l<o&&l<c&&h<o&&h>c)
printf("R-Cross with Lower Shadow");
else if(h>o&&h>c&&l<o&&l>c||h>o&&h>c&&l>o&&l<c||h>o&&h>c&&l>o&&l>c)
printf("R-Cross with Upper Shadow");
else if("l<o&&l<c&&h>o&&h>c")
printf("R-Cross with Lower Shadow and Upper Shadow");
else
printf("R-Cross");
}
return 0;
}*/
/*
一个采购员去银行兑换一张y元f分的支票，结果出纳员错给了f元y分
采购员用去了n分之后才发觉有错
于是清点了余额尚有2y元2f分，问该支票面额是多少？
#include<stdio.h>
int main()
{
    int y,f,n,a=0;
    scanf("%d",&n);
    for(f=0;f<100;f++)
    {
        for(y=0;y<100;y++)
        {
            if(f*100+y-n==2*y*100+2*f)
            {
                a=1;
                printf("%d.%d\n",y,f);
            }
        }
    }
    if(a==0) printf("No Solution\n");
    return 0;
}*/




















