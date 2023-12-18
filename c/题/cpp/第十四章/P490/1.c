#include<stdio.h>
#include<string.h>
int Sdays(char *name);
struct month
{
    char name[10];
    char arrve[5];
    int days;
    int month;
};
struct month months[12] =
    {
        { "January", "Jan", 31, 1 },
        { "February", "Feb", 29, 2 },
        { "March", "Mar", 31, 3 },
        { "April", "Apr", 30, 4 },
        { "May", "May", 31, 5 },
        { "June", "Jun", 30, 6 },
        { "July", "Jul", 31, 7 },
        { "August", "Aug", 31, 8 },
        { "September", "Sep", 30, 9 },
        { "October", "Oct", 31, 10 },
        { "November", "Nov", 30, 11 },
        { "December", "Dec", 31, 12 }
    };
int main()
{
    char NAME[15];
    printf("输入月份:\n");
    scanf("%s",NAME);
    int day=Sdays(NAME);
    printf("到这个月共%d天\n",day);
    return 0;
}
int Sdays(char *name)
{
    int i,j,sum=0;
    for(i=0;i<12;i++)
    {
        if(!strcmp(months[i].arrve,name)) break;
    }
    if(i<12&&i>=0)
    {
        for(j=0;j<i;j++) sum+=months[j].days;
    } else return -1;
    return sum;
}