#include<stdio.h>

void exchange(int number,char one,char two,char three);
void move(char origin,char change);

//我好像只能这样设立全局变量
int step = 0;

int main()
{
    int n;
    scanf("%d",&n);
    exchange(n,'A','B','C');
    printf("%d",step);  //2的n次方减一
    return 0;
}

//number表示的是要转移几个,one表示从哪里转移,two表示中转站是哪个,three表示要移动到哪里
void exchange(int number,char one,char two,char three)
{
    if (number == 1)
    {
        move(one,three);
    }
    //如同书上的一样，先将n-1个放在中间，再将最后一个放在右边，并以此类推。
    else
    {
        exchange(number-1,one,three,two);
        move(one,three);
        exchange(number-1,two,one,three);
    }
    
}

void move(char origin,char change)
{
    printf("%c-->%c\n",origin,change);
    step++;
}