#include<stdio.h>

//这是失败的

int main()
{
    int day;
    scanf("%d",&day);
    int year = day / 10000; //获得年份
    int month = day / 100 - year * 100; //获得月份
    day %= 100; //获得日
    int count = 0;
    //如果不是同一年，则加这一年的时间
    if (year != 2024)
    {
        int count_year = 2024 - year;
        count += 366 + 365 * (count_year-1);
        //如果时间中间出现闰年，则进行相关计算
        if (count_year/4)
        {
            count += count_year/4;
            //加多了怎么办，减一天
            if (count_year % 4 == 0 && month>2)
            {
                count--;
            }
            //不能被400整除，但能被四整除
            if (year <= 1900)
            {
                switch ((1900 - year)/100)
                {
                case 0: //1900
                    count--;
                case 1: //1800
                    count--;
                case 2: //1700
                    count--;
                case 4: //1500
                    count--;
                case 5: //1400
                    count--;
                case 6: //1300
                    count--;
                case 8: //1100
                    count--;
                case 9: //1000
                    count--;
                case 10://1000
                    count--;
                case 11://900
                    count--;
                case 13://700
                    count--;
                case 14://600
                    count--;
                case 15://500
                    count--;
                case 17://300
                    count--;
                case 18://200
                    count--;
                case 19://100
                    count--;
                default:
                    break;
                }
                    
            }
            
        }
    }
    int count_month = 6 - month;
    //看他相差的月份，如果比六月小，则加，比月份大，则减
    switch (count_month)
    {
    case 5:     //一月
        count += 31;
    case 4:     //二月
        count += 29;
    case 3:     //三月
        count += 31;
    case 2:     //四月
        count += 30;
    case 1:     //五月
        count += 31;
        break;
    case -6:    //十二月
        count -= 30;    //这里少减一天反而正常了
    case -5:    //十一月
        count -= 30;
    case -4:    //十月
        count -= 31;
    case -3:    //九月
        count -= 30;
    case -2:    //八月
        count -= 31;
    case -1:    //七月
        count -= 31;
    default:
        break;
    }
    count += 5 - day;
    printf("%d",count);
    return 0;
}