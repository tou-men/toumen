/*
1.printf还能这么玩*/
/*2.你好你好你好呀！
#include<stdio.h>
#include<string.h>
int main(void)
{
    char p0[] = "Hello,Linux";
    char *p1 = "Hello,Linux";
    char p2[11] = "Hello,Linux";
    printf("%p\n%p\n",&p0[11],&p2[11]);
    printf("p0==p1: %d, strcmp(p0,p2): %d\n", p0 == p1, strcmp(p0, p2));
    printf("sizeof(p0): %zu, sizeof(p1): %zu, sizeof(*p2): %zu \n",
           sizeof(p0), sizeof(p1), sizeof(*p2));
    printf("strlen(p0): %zu, strlen(p1): %zu\n", strlen(p0), strlen(p1));
    return 0;
}*/
/*3.换一个变量名不行吗？
#include<stdio.h>
int a = 3;
void test() 
{
    int a = 1;
    a += 1;
    {
        int a = a + 1;
        printf("a = %d\n", a);
    }
    printf("a = %d\n", a);
}
int main(void) 
{
    test();
    printf("a = %d\n", a);
    return 0;
}*/
/*4.内存对不齐
#include<stdio.h>
typedef union {
    long l;
    int i[5];
    char c;
} UNION;
typedef struct {
    int like;
    UNION coin;
    double collect;
} STRUCT;
int main(void) {
    printf("sizeof (UNION) = %zu\n", sizeof(UNION)); 
    //sizeof (UNION) = 24
    printf("sizeof (STRUCT) = %zu\n", sizeof(STRUCT));
    //sizeof (STRUCT) = 40
    return 0;
}*/
/*5.Bitwise
#include<stdio.h>
int main(void) {
    unsigned char a = 4 | 7;
    //00000100 | 00000111 = 00000111(7)
    a <<= 3;
    //00000111 << 3 = 00111000(56)
    unsigned char b = 5 & 7;
    //00000101 & 00000111 = 00000101(5)
    b >>= 3;
    //00000101 >> 3 = 00000000(0)
    unsigned char c = 6 ^ 7;
    //00000110 ^ 00000111 = 00000001(1)
    c = ~c;
    //无符号字符型范围是0～256
    //~是取反码 00000001的反码是11111110(254)
    unsigned short d = (a ^ c) << 3;
    //00111000 ^ 11111110 = 11000110
    //11000110 << 3 = 00110000(48)
    signed char e = -63;
    //有符号型第一位是符号位0正1负
    //e == 10111111
    e <<= 2;
    //先转换为补码再运算，正数补码是本身，负数补码是反码+1
    //e补码为11000001
    //11000001 << 2 = 00000100(4,对应16进制0x4)
    printf("a: %d, b: %d, c: %d, d: %d\n", a, b, c, (char)d);
    //a: 56, b: 0, c: 254, d: 48
    printf("e: %#x\n", e);//转换16进制
    //e: 0x4
    return 0;
}*/
/*6.英译汉
请说说下面数据类型的含义，谈谈const的作用。
1.char *const p
2.char const *p
3.const char *p
*/
/*7.汉译英
int *p[10]
int (*p)[10]
int (*p[10])(int a)*/
/*8.
*/
/*9.手脑并用
*/
/*
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char* convertAndMerge(char words[2][20])
{
    int len1=strlen(words[0]);//分别计算长度
    int len2=strlen(words[1]);
    //申请内存
    char *marge = (char*)malloc((len1+len2+1)*sizeof(char));
    //拼接两个字符串为一个字符串
    strcpy(marge,words[0]);
    strcat(marge,words[1]);
    //转换大小写
    int i;
    for(i=0;i<len1+len2;i++)
    {
        if(marge[i]>='a' && marge[i]<="z") marge[i]-=32;
        else if(marge[i]>='A' && marge[i]<="Z") marge[i]+=32;
    }
    return marge;
}
int main(void) {
    char words[2][20] = {"Welcome to Xiyou ", "Linux Group 2022"};
    printf("%s\n", words[0]);
    printf("%s\n", words[1]);
    char *str = convertAndMerge(words);
    printf("str = %s\n", str);
    free(str);
}*/
/*10.给你我的指针，访问我的心声
#include<stdio.h>
int main(int argc, char **argv) {
    int arr[5][5];
    int a = 0;
    for (int i = 0; i < 5; i++) {
        int *temp = *(arr + i);
        for (; temp < arr[5]; temp++) *temp = a++;
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}*/
/*11.奇怪的参数
#include <stdio.h>
int main(int argc, char **argv) {
    printf("argc = %d\n", argc);
    while (1) {
        argc++;
        if (argc < 0) {
            printf("%s\n", (char *)argv[0]);
            break;
        }
    }
    return 0;
}*/
/*12.奇怪的字符 
#include<stdio.h>
#include<string.h>
int main(int argc, char **argv) {
    int data1[2][3] = {{0x636c6557, 0x20656d6f, 0x58206f74},
                       {0x756f7969, 0x6e694c20, 0x00000000}};
    int data2[] = {0x47207875, 0x70756f72, 0x32303220, 0x00000a32};
    char *a = (char *)data1;
    char *b = (char *)data2;
    char buf[1024];
    strcpy(buf, a);
    strcat(buf, b);
    printf("%s \n", buf);
    //Welcome to Xiyou Linux Group 2022
    return 0;
}*/
/*13.小式宏刀
#include<stdio.h>
#define SWAP(a, b, t) t = a; a = b; b = t
#define SQUARE(a) a *a
#define SWAPWHEN(a, b, t, cond) if (cond) SWAP(a, b, t)
int main() {
    int tmp;
    int x = 1;
    int y = 2;
    int z = 3;
    int w = 3;
    SWAP(x, y, tmp);
    printf("x = %d, y = %d, tmp = %d\n", x, y, tmp);
    //x = 2, y = 1, tmp = 1
    //进行了交换，temp是a的值1
    if (x > y) SWAP(x, y, tmp);//现在x=2, y=1条件为真
    //再次交换，temp是后来a的值2
    printf("x = %d, y = %d, tmp = %d\n", x, y, tmp);
    //x = 1, y = 2, tmp = 2
    SWAPWHEN(x, y, tmp, SQUARE(1 + 2 + z++ + ++w) == 100);
    //SQUARE()相当于1 + 2 + z++ + ++w * 1 + 2 + z++ + ++w
    //先进行自加然后乘法然后加减然后判断结果是29条件为假不执行交换的第一句
    //a=b=2；b=tmp=2；所以下面x和y都是2
    printf("x = %d, y = %d\n", x, y);
    //x = 2, y = 2
    printf("z = %d, w = %d, tmp = %d\n", z, w, tmp);
    //z与w分别有两个自加都为5
    //z = 5, w = 5, tmp = 2
    printf("%d",SQUARE(1 + 2 + z++ + ++w));
    return 0;
}*/










