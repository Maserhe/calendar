#include<stdio.h>
int total_days=0;//变量
int month_days=0;//变量
int week_days=0;//变量
int TotalDays(int year,int month)
{
    int y,mon;
    for (y=1900;y<year;y++)
    {
        if((y %4==0 && y %100!=0)||(y %400==0))
        {
            total_days+=366;
        }
        else
        {
            total_days+=365;
        }
        
        for (mon=1;mon<month;mon++)
        {
            if (mon==2)
            {
                if((year %4==0 && y %100 !=0)||year %400==0)
                {
                    total_days+=29;
                }
                else
                {
                    total_days+=28;
                }
                
            }
            else if (mon==4||mon==6||mon==9||mon==11)
            {
                total_days+=30;
            }
            else
            {
                total_days+=31;
            }
        }
    }
}
int WeekDay()
{
    total_days+=1;
    week_days=total_days %7;

}
int MonthDays(int year,int month)
{
    if(month==2)
    {
        if((year %4==0 && year %100 !=0)||(year %400==0))
        {
            month_days=29;
        }
        else
        {
            month_days=28;
        }
    }
    else if(month==4||month==6||month==9||month==11)
    {
        month_days=30;
    }
    else
    {
        month_days=31;
    }
}
void printf()
{
    int i;
    printf("日 一 二 三 四 五 六\n");
    for(i=1;i<=week_days;i++)
    {
        printf("   ");

    }
    int k;
    for(k=1;k<=month_days;k++)
    {
        if(total_days %7==6)
        {
            printf("%2d\n",k);

        }
        else
        {
            printf("%2d  ",k);

        }
        total_days++;

    }
    printf("\n\n");

}
int main()
{
    int year=0,month=0;
    system("clear");
    printf("请输入查询时间：    年    月\n");
    system("tput cup 0 16");
    scanf("%d",&year);
    system("tput cup 0 24");
    scanf("%d",&month);
    printf("\n");
    TotalDays(year,month);
    WeekDay(year,month);
    MonthDays（year,month};
    peintf();
    return 0；
}