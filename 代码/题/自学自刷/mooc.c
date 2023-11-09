/*
#include<stdio.h>
#include<string.h>
char* mycopy(char *dst,const char* src)
{
    int idx = 0;
    while(src[idx] != '\0')
    {
        dst[idx] = src[idx];
        idx++;
    }
    dst[idx]='\0';
    return dst;
}
int main(int argc, char const *argv[])
{
    char s1[] = "abc";
    char s2[] = "abc";
    strcpy(s1,s2);
    return 0;
}*/
/*
#include<stdio.h>
#include<string.h>
int main()
{
    char s[] = "hello";
    char *p = strchr(s,'l');
    char c = *p;
    *p = '\0';
    char *t = (char*)malloc(strlen(s)+1);
    strcpy(t,s);
    //p=strchr(p+1,'l');
    printf("%s\n", t);
    free(t);
    return 0;
}*/
/*
#include<stdio.h>
enum color {red, yellow, numcolors};
int main()
{
    printf("%d\n",yellow);
    return 0;
}*/
/*
#include<stdio.h>
int main()
{
    int a;
    scanf("%i",&a);
    printf("%i\n",a);
    return 0;
}*/
/*
#include<stdio.h>
struct point 
{
    int x;
    int y;
};
struct point getStruct(void);
void output(struct point);
int main()
{
    struct point y = {0, 0};
    y = getStruct();
    output(y);
    return 0;
}
struct point getStruct(void)
{
    struct point p;
    scanf("%d",&p.x);
    scanf("%d",&p.y);
    printf("%d, %d\n", p.x, p.y);
    return p;
}
void output(struct point p) 
{
    printf("%d, %d\n", p.x, p.y);
}*/
/*
#include<stdio.h>
struct point
{
    int x;
    int y;
};
struct rectangle
{
    struct point p1;
    struct point p2;
};
void printRect(struct rectangle r)
{
    printf("<%d, %d> to <%d, %d>\n",r.p1.x, r.p2.y, r.p2.x, r.p2.y);
}
int main()
{
    int i;
    struct rectangle rects[] = 
    {
        {{1, 2}, {3, 4}},
        {{5, 6}, {7, 8}}
    };
    for(i=0;i<2;i++)
    {
        printRect(rects[i]);
    }
    return 0;
}*/
/*
#include<stdio.h>
struct sk
{
    int a;
    float b;
}data, *p=&data;
int main()
{
    printf("%d %.0f\n",p->a,(*p).a);
    return 0;
}*/
/*
#include<stdio.h>
typedef short int abc;
int main()
{
    abc a;
    int b=sizeof(a);
    printf("%d",b);
    return 0;
}*/
/*第三次从45-59对3-5行进行赋值，以此类推，后面的赋值会覆盖住前一次
#include<stdio.h>
typedef union 
{
    int i;
    char ch[sizeof(int)];
} CHI;
int main(int argc, char const *argv[])
{
    CHI chi;    
    int i;
    chi.i=1234;
    for(i=0;i<sizeof(int);i++)
    {
        printf("%02hhX\n",chi.ch[i]);
    }
    return 0;
*/
/*#include<stdio.h>
#include<stdlib.h>
typedef struct _node {
    int value;
    struct _node *next;
} Node;
int main(int argc,char const *argv[])
{
    Node * head = NULL;
    int number;
    do  {
            scanf("%d", &number);
            if(number != -1)
            {
                Node *p = (Node*)malloc(sizeof(Node));
                p->value = number;
                p->next = NULL;
                Node *last=head;
                if( last )
                {
                    while(last->next)
                    {
                        last=last->next;
                    }
                    last->next = p; 
                } else {
                    head = p;
                }
            }
        } while(number != -1);
    
}*/
/*
#include<stdio.h>
int main(int argc,char const *argv[])
{
    printf("%s:%d",__FILE__,__LINE__);
    printf("%s,%s",__DATE__,__TIME__);
    return 0;
}
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



































