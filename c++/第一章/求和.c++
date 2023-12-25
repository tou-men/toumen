#include<iostream>
int main()
{
    int n,sum=0;
    while(std::cin >>n)
    {
        sum+=n;
    }
    std::cout <<"和是:" <<sum <<std::endl;//ctrl + D 结束循环
    return 0;
}