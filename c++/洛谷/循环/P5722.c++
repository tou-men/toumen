#include<iostream>
int he(int n);
int main()
{
    int n;
    std::cin >>n;
    std::cout <<he(n);
    return 0;
}int he(int n)
{
    if(n!=1) return n+he(n-1);
    else return n;
}