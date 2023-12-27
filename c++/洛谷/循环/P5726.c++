#include<iostream>
#include<cstdio>
int main()
{
    int n,max,min,x;
    double sum=0;
    std::cin >>n >>x;
    max=x;
    min=x;
    sum+=x;
    for(int i=1;i<n;i++)
    {
        std::cin >>x;
        sum+=x;
        if(x>max) max=x;
        if(x<min) min=x;
    }
    sum=sum-min-max;
    sum/=(n-2)*1.0;
    //std::cout <<sum;
    printf("%.2lf",sum);
    return 0;
}