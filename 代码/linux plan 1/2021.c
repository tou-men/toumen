/*1.大小和长度竟然不是一个意思*/
/*
#include<stdio.h>
int main(void)
{
    char s[] ="I love Linux\0\0\0";
    int a = sizeof(s);
    int b = strlen(s);
    printf("%d %d\n", a, b);
    return 0;
}// 16 12*/
/*箱子的大小和装入物品的顺序有关*/
/*
#include<stdio.h>
struct test1
{
    int a;
    short b;
    double c;
};
struct test2
{
    short b;
    int a;
    double c;
};
int main(void)
{
    struct test1 t1;
    struct test2 t2;
    printf("sizeof(t1): %d\n", sizeof(t1));
    //sizeof(t1): 16
    //sizeof(t2): 16
    printf("sizeof(t2): %d\n", sizeof(t2));
    return 0;
}*/
/*3.哦，又是函数*/
/*
#include<stdio.h>
#include<stdlib.h>
void func(int arr[10][13])
{
    for(int i = 0;i < 10; i++ )
    {
        for(int j = 0; j < 13; j++)
        {
            printf("%d\n",arr[i][j]);
        }
    }
}
int main(void)
{
    int arr[10][13];
    for(int i = 0;i < 10; i++ )
    {
        for(int j = 0; j < 13; j++)
        {
            arr[i][j] = rand()%5;
        }
    }
    func(arr);
    return 0;
}*/
/*4.就不能换个变量名吗?*/
/*
#include<stdio.h>
int ver = 123;
void func1(int ver)
{
    ver++;
    printf("ver = %d\n",ver);
}
void func2(int *pr)
{
    *pr = 1234;
    printf("*pr = %d\n",*pr);
    pr = 5678;
    printf("ver = %d\n",ver);
}
int main()
{
    int a = 0;
    int ver = 1025;
    for(int a = 3; a < 4; a++)
    {
        static int a = 5;
        printf("a = %d\n", a);
        a = ver;
        func1(ver);
        int ver = 7;
        printf("ver = %d\n",ver);
        func2(&ver); 
    }
    printf("a = %d\tver = %d\n", a, ver);
    return 0;
}*/
/*5.套娃真好玩!*/
/*
#include<stdio.h>
unsigned sum(unsigned n)
{
    return n ? sum(n-1) + n : 0 ;
}
int main(void)
{
    printf("%u\n", sum(100));
    return 0;
}*/
/*6.算不对的算术*/
/*
#include<stdio.h>
void func(void)
{
    short a = -2;
    unsigned int b = 1;
    b += a;
    int c = -1;
    unsigned short d = c * 256;
    c <<= 4;
    int e = 2;
    e = ~e | 6;
    d = (d & 0xff) + 0x2022;
    printf("a=0x%hx\tb=0x%x\td=0x%hx\te=0x%x\n", a, b, d, e);
    printf("c=0x%hhx\t\n",(signed char)c);
    //return 0;
}*/
/*7.指针和数组的恩怨情仇*/
#include<stdio.h>
int main(void)
{
    int a[3][3] = {{1, 2, 3},{4, 5, 6} {7, 8, 9}};
    int (*b)[3] = a;
    ++b;
    b[1][1] = 10;
    int *ptr = (int *)(&a + 1);
}











































