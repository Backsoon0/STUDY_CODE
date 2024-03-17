#include<stdio.h>
#include<math.h>

void Hexadecimal_conversion(int number,int origin_hexadecimal,int exchange_hexadecimal);
int exchange(int number,int exchange_hexadecimal);

int main()
{
    int origin_Hexadecimal,number,exchange_hexadecimal;
    scanf("%d %d %d",&number,&origin_Hexadecimal,&exchange_hexadecimal);
    Hexadecimal_conversion(number,origin_Hexadecimal,exchange_hexadecimal);
    return 0;
}

//先转化为十进制，再转化为其他进制
void Hexadecimal_conversion(int number,int origin_hexadecimal,int exchange_hexadecimal)
{
    int ten_number = 0;
    int digit = 0;
    while (number)
    {
        int unit = number % 10;
        number /= 10;
        ten_number += unit * pow(origin_hexadecimal,digit);
        digit++;
    }
    printf("%d\n",ten_number);
    int exchange_number = exchange(ten_number,exchange_hexadecimal);
    printf("%d",exchange_number);
}


//十进制转换
int exchange(int number,int exchange_hexadecimal)
{
    int exchange_number = 0;
    //根据十进制转换为二进制为例
    /*    5/2=2...1
          2/2=1...0
          1/2=0...1
          5的二进制为101*/
    for(int i = 1;number != 0;i *= 10)
    {
        int unit = number%exchange_hexadecimal;
        number /= exchange_hexadecimal;
        if(unit)
        {
            exchange_number += i * unit;
        }

    }
    return exchange_number;
}