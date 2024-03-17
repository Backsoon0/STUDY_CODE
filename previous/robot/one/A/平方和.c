#include<stdio.h>
#include<math.h> 

int main()
{
    double num1,num2;
    scanf("%lf %lf",&num1,&num2);			//输入两个数 
    printf("%lf",pow(num1,2.0)+pow(num2,2.0));	//打印平方和 
    return 0;
}
