#include<stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    //�ж��Ƿ��ܱ�2����������ܣ���Ϊż��������Ϊ���� 
	if(a%2 == 0)
    {
        printf("Ϊż��");
    }
    else
    {
        printf("Ϊ����");
    }
    return 0;
}
