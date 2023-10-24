#include<stdio.h>

//征杰涵先生是不是会梦游啊？
int main()
{
    char letter;
    int count = 0;
    letter = getchar();
    while (letter != '\n')  //或许改成EOF更好？？
    {
        //判断输入的是不是连续的ace
        if (letter == 'A' || letter == 'a')
        {
            letter = getchar();
            if (letter == 'C' || letter == 'c')
            {
                letter =getchar();
                if (letter == 'E' || letter == 'e')
                {
                    count++;    //有连续的就加一
                }
                
            }
            
        }
        letter = getchar(); //可别忘了这个
    }
    printf("%d",count);
    return 0;
}