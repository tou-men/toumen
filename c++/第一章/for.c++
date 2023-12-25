#include<iostream>
int main()
{
    int a,b,sum=0;
    std::cin >>a >>b;
    for(int i=a;i<=b;++i)
    {
        sum+=i;
    }
    std::cout <<"a -> b = " <<sum <<std::endl;
    return 0;
}