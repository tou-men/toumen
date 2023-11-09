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
int ver = 123;//全局变量整个代码有效
void func1(int ver)
{
    ver++;//1025++
    printf("ver = %d\n",ver);
    //ver = 1026
}
void func2(int *pr)//指针指向ver
{
    *pr = 1234;
    //对所指区域的赋值
    printf("*pr = %d\n",*pr);
    //*pr = 1234
    pr = 5678;//改变地址
    printf("ver = %d\n",ver);
    //全局变量ver = 123
}
int main()
{
    int a = 0;
    int ver = 1025;//重定义，作用域为main函数
    for(int a = 3; a < 4; a++)//对a的重定义出了for循环就销毁
    {
        static int a = 5;//静态，使a的生命周期延长，出循环也有效
        printf("a = %d\n", a);
        //a = 5
        a = ver;//此处er是main函数的1025
        func1(ver);//从此处开始看函数
        int ver = 7;//重定义，本作用域有效
        printf("ver = %d\n",ver);
        //ver = 7
        func2(&ver); //传er的地址
    }
    printf("a = %d\tver = %d\n", a, ver);
    //a = 0    ver = 1025对应main函数的int
    return 0;
}*/
/*5.套娃真好玩!*/
/*
#include<stdio.h>
unsigned sum(unsigned n)
{
    return n ? sum(n-1) + n : 0 ;
    //a ? b : c;是一个语句判断a是否为真，为真则输出b，否则输出c
    //当n!=0的时候会连续的将n-1传入此函数直到n=0
    //最终结果就是从100+到0为5050
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
/*#include<stdio.h>
int main(void)
{
    int a[3][3] = {{1, 2, 3},{4, 5, 6} {7, 8, 9}};
    int (*b)[3] = a;
    ++b;
    b[1][1] = 10;
    int *ptr = (int *)(&a + 1);
}*/
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
    printf("a=0x%hx\tb=0x%x\t\n", a, b);
    //a=0xfffe        b=0xffffffff
    //无符号整形最大值4294967295最小值是0,小于0之后会变成最大值转换为16进制是ffffffff
    printf("d=0x%hx\te=0x%x\n",d,e);
    //d=0x2022        e=0xffffffff
    //将负数短整形转换为无符号短整形并转化为16进制输出   
    printf("c=0x%hhx\t\n",(signed char)c);
    //c=0xf0
}
int main()
{
    func();
    return 0;
}*/
/*
#include<stdio.h>
int main(void)
{
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int(*b)[3] = a;
    ++b;
    b[1][1] = 10;
    int *ptr = (int *)(&a + 1);
    printf("%d %d %d \n", a[2][1], **(a + 1), *(ptr - 1));
    //       10 4  9
    //b先指向了二维数组的第一行b++之后换到了第二行然后对b[1][1]赋值等于对a[2][1]赋值
    //相当于先到二维数组的第二行然后直接输出第一个是4
    //ptr的地址相当于在整个二维数组的后一位，-1之后回到了二维数组的最后一位
    return 0;
}*/









































