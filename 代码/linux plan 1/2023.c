/*0.找水
二进制数表示位数，1000可以用10位二进制数字表示，给每杯水二进制编号，对应每一位数字分为一组，共分为十组，从右到左依次为1-10。
一个组对应一个小鼠，让每组的小鼠去喝对应位数是1的水，这样每一杯水都会有小鼠喝，最后小鼠死亡，就去找对应位数是1的；
例如，1,3组的小鼠死亡，就是第五杯水有毒；*/
/*1.先预测一下～*/
/*
#include<stdio.h>
char *welcome()
{
    return "ljx";
}
int main(void)
{
    char *a = welcome();
    printf("Hi, 我相信 %s 可以面试成功!\n", a);
    return 0;
}*/
/*欢迎来到Linux兴趣小组
有趣的输出，为什么会这样子呢～*/
/*
#include<stdio.h>
int main(void)
{
    char *ptr0 = "Welcome to Xiyou Linux!";
    char ptr1[] = "Welcome to Xiyou Linux!";
    if(*ptr0 ==*ptr1)
    {
        printf("%d\n",printf("Hello, Linux Group - 2%d", printf("")));
    }
    int diff = ptr0 - ptr1;
    printf("Pointer Difference: %d\n",diff);
}*/
/*3.一切都翻倍了吗*/
/*
#include<stdio.h>
int main(void)
{
    char arr[] = {'L','i','n','u','x','\0','!'},str[20];
    short num = 520;
    int num2 = 1314;
    printf("%zu\t%zu\t%zu\n", sizeof(*&arr), sizeof(arr + 0),sizeof(num = num2 + 4));
    printf("%d\n", sprintf(str, "0x%x", num) == num);
    printf("%zu\t%zu\n", strlen(&str[0] + 1), strlen(arr + 0));
    //printf("%d\n",num2);
    return 0;
}*/
/*4.奇怪的输出*/
/*
#include<stdio.h>
int main(void)
{
    char a = 64 & 127;
    char b = 64 ^ 127;
    char c = -64 >> 6;
    char ch = a + b - c;
    printf("a =  %d\nb = %d\nc = %d\n", a, b, c);
    //           64      63      -1
    printf("ch = %d\n", ch);
    //           -128
    return 0;
}*/
/*5.乍一看就不想看的函数*/
/*
#include<stdio.h>
int func(int a, int b)
{
    if(!a) return b;//当a是0时候返回b的值;
    printf("%d %d\n",a, b);
    return func((a & b) << 1, a ^ b);//int型数据正向超限时，再一次会从最小数值重新开始；
    //负向超限会从最大值重新开始；
}
int main(void)
{
    int a = 4, b = 9, c = -7;
    printf("%d\n",func(a, func(b, c)));
    return 0;
}*/
/*6.自定义过滤*/
/*
#include<stdio.h>
#include<malloc.h>
typedef int (*Predicate)(int);
//int *filter(int *array, int length, Predicate predicate, int *resultLength);
int main(void)
{
    int array[] = {-3, -2, -1, 0, 1, 2, 3, 4, 5, 6};
    int length = sizeof(array) / sizeof(array[0]);
    int resultLength;
    int *filteredNumbers = filter(array, length, isPositive, &resultLength);
    for(int i = 0; i < resultLength; i++)
    {
        printf("%d ", filteredNumbers[i]);
    }
    printf("\n");
    free(filteredNumbers);
    return 0;
}*/
/*7.静...态...*/
/*8.救命!指针!*/
/*9.咋不循环了*/
/*
#include<stdio.h>
#include<stdlib.h>
int main(int argc, char* argv[])
{
    printf("[%d]\n", argc);
    while(argc)
    {
        ++argc;
    }
    int i = -1, j = argc, k = 1;
    i++ && j++ || k++;
    printf("i = %d, j = %d, k = %d\n", i, j, k);
    return EXIT_SUCCESS;
}*/
/*10.到底是不是TWO*/
/*
#include<stdio.h>
#define CAL(a) a*a*a
#define MAGIC_CAL(a, b) CAL(a) + CAL(b)
int main(void)
{
    int nums = 1;
    if(16 / CAL(2) == 2)
    {
        printf("I'm TWO(>w<)\n");
    } else 
        {
            int nums = MAGIC_CAL(++nums, 2);
        }
    printf("%d\n", nums);
    return 0;
}*/
/*11.克隆困境*/
/*
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Student
{
char *name;
int age;
};
void initializeStudent(struct Student *student, const char *name,int age)
{
student->name = (char *)malloc(strlen(name)+1);
strcpy(student->name, name);
student->age=age;
}
int main(void)
{
struct Student s1, s2;
initializeStudent(&s1,"Tom",18);
initializeStudent(&s2,"Jerry",28);
s1=s2;
printf("s1的姓名：%s 年龄：%d\n",s1.name,s1.age);
printf("s2的姓名：%s 年龄：%d\n",s2.name,s2.age);
//free(s1.name);
//free(s2.name);
return 0;
}*/
/*12.你好，我是内存*/
/*
#include<stdio.h>
struct structure
{
    int foo;
    union
    {
        int integer;
        char string[11];
        void *pointer;
    } node;
    short bar;
    long long baz;
    int array[7];
};
int main(void)
{
    int arr[]={ 0x590ff23c, 0x2fbc5a4d, 0x636c6557, 0x20656d6f,
                0x58206f74, 0x20545055, 0x6577202c, 0x6d6f636c,
                0x6f742065, 0x79695820, 0x4c20756f, 0x78756e69,
                0x6f724720, 0x5b207075, 0x33323032, 0x7825005d,
                0x636c6557, 0x64fd6d1d};
    printf("%s\n",((struct structure *)arr)->node.string);
    return 0;
}
请实现 filter()函数：过滤满足条件的数组元素。
提示：使用函数指针作为函数参数并且你需要为新数组分配空间。
typedef int (*Predicate)(int);
int *filter(int *array, int length, Predicate predicate,int *resultLength); 补全函数
int isPositive(int num) { return num > 0; }
int main(void) {
    int array[] = {-3, -2, -1, 0, 1, 2, 3, 4, 5, 6};
    int length = sizeof(array) / sizeof(array[0]);
    int resultLength;
    int *filteredNumbers = filter(array, length, isPositive,&resultLength);
    for (int i = 0; i < resultLength; i++) {
    printf("%d ", filteredNumbers[i]);
    }
    printf("\n");
    free(filteredNumbers);
    return 0;
}*/
#include<stdio.h>
#include<stdlib.h>
typedef int (*Predicate)(int);
int *filter(int *array, int length, Predicate predicate,int *resultLength)//补全函数
{
    int *RESULT=(int *)malloc(length*sizeof(int));//申请动态内存
    int COUNT=0,i;
    for(i=0;i<length;i++)
    {
        if(isPositive(array[i]))//参考返回正数的注释
        {
            RESULT[COUNT++]=array[i];//存入正数
        }
    }
    *resultLength = COUNT;
    return RESULT;
}
int isPositive(int num) { return num > 0; }//返回正数,当>0时候返回,1<=0时候返回0
int main(void) {
    int array[] = {-3, -2, -1, 0, 1, 2, 3, 4, 5, 6};
    int length = sizeof(array) / sizeof(array[0]);
    int resultLength;
    int *filteredNumbers = filter(array, length, isPositive,&resultLength);
    for (int i = 0; i < resultLength; i++) {
    printf("%d ", filteredNumbers[i]);
    }
    printf("\n");
    free(filteredNumbers);//释放malloc的内存
    return 0;
}




































