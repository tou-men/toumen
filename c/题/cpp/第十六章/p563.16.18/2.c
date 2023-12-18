#include<stdio.h>
#define qiudao(a,b) 1/((1/a+1/b)/2)
int main()
{
    double a,b;
    scanf("%lf%lf",&a,&b);
    double c=qiudao(a,b);
    printf("%lf\n",c);
    return 0;
}//调和平均数