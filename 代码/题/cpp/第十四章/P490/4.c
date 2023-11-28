#include<stdio.h>
#include<string.h>
struct handle
{
    char first[10];
    char middle[10];
    char last[10];
};
struct person
{
    unsigned int n;
    struct handle a;
};
void Print(struct person *p);
int main()
{
    struct person n[5]=
    {
        {
            302039823,
            { .first = "Zeep", .last = "Po" },
        },
        {
            302039823,
            { "Emo", .last = "Tao" },
        },
        {
            302039823,
            { "Jun", "Hao", "Zhu" },
        },
        {
            302039823,
            { "Zhong", "Zheng", "Chen" },
        },
        {
            302039823,
        { "P", .last = "W" },
        }
    };
    Print(n);
    return 0;
}
void Print(struct person *p)
{
    int i;
    for(i=0;i<5;i++)
    {
        if(!strlen((p+i)->a.middle))
        {
            printf("%s, %s -- %d\n",(p+i)->a.first,(p+i)->a.last,(p+i)->n);
        } else 
            {
                printf("%s  %s  %s.-- %d\n",(p+i)->a.first,(p+i)->a.last,(p+i)->a.middle,(p+i)->n);
            }
    }
}