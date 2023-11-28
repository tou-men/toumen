#include<stdio.h>
struct year
{
    int day;
    int month;
    int year;
};
int days(struct year yonghu);
int main()
{
    struct year yonghu;
    scanf("%d%d%d",&yonghu.day,&yonghu.month,&yonghu.year);
    printf("%d\n",days(yonghu));
    return 0;
}
int days(struct year yonghu)
{
    int sum=0;
    if(yonghu.year%400==0||(yonghu.year%4==0&&yonghu.year%100!=0))
    {
        switch (yonghu.month)
        {
            case 12:
                sum+=31;
            case 11:
                sum+=30;
            case 10:
                sum+=31;
            case 9:
                sum+=30;
            case 8:
                sum+=31;
            case 7:
                sum+=31;
            case 6:
                sum+=30;
            case 5:
                sum+=31;
            case 4:
                sum+=30;
            case 3:
                sum+=31;
            case 2:
                sum+=29;
            case 1:
                sum+=yonghu.day;
                break;
        }
    } else 
    {
        switch (yonghu.month)
        {
            case 12:
                sum+=31;
            case 11:
                sum+=30;
            case 10:
                sum+=31;
            case 9:
                sum+=30;
            case 8:
                sum+=31;
            case 7:
                sum+=31;
            case 6:
                sum+=30;
            case 5:
                sum+=31;
            case 4:
                sum+=30;
            case 3:
                sum+=31;
            case 2:
                sum+=28;
            case 1:
                sum+=31;
                break;
        }
    }
    return sum;
    // if(yonghu.year%400==0||(yonghu.year%4==0&&yonghu.year%100!=0))
    // yonghu.Month[1]=29;
    // else yonghu.Month[1]=28;
    // for(int i=0;i<yonghu.month;i++)
    // {
    //     sum+=yonghu.Month[i];
    // }
    //return sum;
}