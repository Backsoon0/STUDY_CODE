#include<stdio.h>

int main()
{
    int a;
    for(a=1;a<=20;a++)	//1��20��ѭ�� 
    {
        if(a%4 == 0)	//�ж��ܲ��ܱ�4���� 
        {
            printf("%d\n", a);
        }
    }
    return 0;
}
