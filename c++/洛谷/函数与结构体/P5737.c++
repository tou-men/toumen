#include<iostream>
int run(int a);
int main()
{
    int a,b,i,sum=0;
    std::cin >>a >>b;
    for(i=a;i<=b;i++)
    {
        if(run(i)==1)
        {
            sum++;
        }
    }
    std::cout <<sum <<std::endl;
    for(i=a;i<=b;i++)
    {
        if(run(i)==1)
        {
            std::cout <<i <<" ";
        }
    }
}
int run(int a)
{
    int flag=-1;
    if((a%4==0&&a%100!=0)||a%400==0) flag=1;
    return flag;
}