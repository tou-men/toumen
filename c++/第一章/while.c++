#include<iostream>
int main()
{
    int a=1,sum=0;
    while(a<=10)
    {
        sum+=a;
        a++;
    }
    std::cout <<"从1加到10是" <<sum <<std::endl;
    return 0;
}