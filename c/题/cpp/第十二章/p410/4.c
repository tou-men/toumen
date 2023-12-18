#include<stdio.h>
int xy();
int main()
{
    xy();
    xy();
    printf("%d",xy());
    return 0;
}
int xy()
{
    static int n=0;
    n++;
    return n;
}//返回被调用的次数