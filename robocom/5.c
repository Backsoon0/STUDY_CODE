#include<stdio.h>
#include<math.h>

// int sort(int num,int line,int number[][line]);

int main()
{
    int N,num;
    scanf("%d %d",&N,&num);
    int line = pow(N,3);
    int number[3][line];
    int the_number = 0;
    //这里进行初始化
    for (int j = 0, i = 0; j < 3; j++)
    {
        for (int i = 0; i < line; i++)
        {
            the_number++;
            number[j][i] = the_number;  //每行逐次增加
        }
        the_number += 9;    //因为之后还要自加1所以加9就行了
    }
    //这里是用来查看数组的输出的
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < line; j++)
    //     {
    //         printf("%d ",number[i][j]);
    //     }
    //     printf("\n");
    // }
    int t = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < line; j++)
        {
            if (number[i][j] == num)
            {
                printf("%d %d",i,j);
                t++;    //这样如果检测出来就能直接退出了
                break;
            }
            
        }
        //这样如果检测出来就能直接退出了
        if (t)
        {
            break;
        }
        
    }
    if (t == 0)
    {
        printf("不存在");
    }
    
    return 0;
}

//想弄一个函数但是不知道怎么弄
// int sort(int num,int line,int number[][line])
// {
//     int id;
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < line; j++)
//         {
//             if (number[i][j] == num)
//             {
//                 printf("%d %d",i,j);
//                 id++;    //这样如果检测出来就能直接退出了
//                 break;
//             }
            
//         }
//         //这样如果检测出来就能直接退出了
//         if (id)
//         {
//             break;
//         }
        
//     }
//     return id;
// }