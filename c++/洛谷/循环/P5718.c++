#include<iostream>
int main()
{
    int n,min,a;
    std::cin >>n >>min;

    for(int i=1;i<n;i++)
    {
        std::cin >>a;
        if(min>a) min=a;
    }
    std::cout <<min <<std::endl;
    return 0;
}