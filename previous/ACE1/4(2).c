#include<stdio.h>

//这是成功的

int the_year_count(int year,int reach,int month);

int main()
{
    int day;
    scanf("%d",&day);
    int year = day / 10000; //获得年份
    int month = day / 100 - year * 100; //获得月份
    day %= 100; //获得日
    int count = 0;
    //直接暴力破解
    if (month <= 6)
    {
        count += the_year_count(year,2024,month);        
    }
    else
    {
        count += the_year_count(year,2023,month);
    }
    //月份分为2023下半年和2024上半年
    switch (month)
    {
    case 7:
        count += 31;
    case 8:
        count += 31;
    case 9:
        count += 30;
    case 10:
        count += 31;    
    case 11:
        count += 30;
    case 12:
        count += 31;
    case 1:
        count += 31;
    case 2:
        count += 29;
    case 3:
        count += 31;
    case 4:
        count += 30;
    case 5:
        count += 31;
    default:
        break;
    }
    count += 5 - day;
    printf("%d",count);
    return 0;
}

int the_year_count(int year,int reach,int month)
{
    int count = 0;
    //判断是以这一年为基准还是以下一年为基准
    if (month <= 2)
    {
        for (int i = year; i < reach; i++)
        {
            //闰年加366天，平年加365天
            if (i%400 == 0 || (i%100 != 0 && i%4 == 0))
            {
                count += 366;
            }
            else
            {
                count += 365;
            }
            
        }
    }
    else
    {
        for (int i = year + 1; i <= reach; i++)
        {
            //闰年加366天，平年加365天
            if (i%400 == 0 || (i%100 != 0 && i%4 == 0))
            {
                count += 366;
            }
            else
            {
                count += 365;
            }
            
        }
    }
    
    return count;
}