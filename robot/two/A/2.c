#include<stdio.h>

int main()
{
	int arr[5] = { 29, -33 , 12, 3, -80 };
	int min = arr[0];
	int i;
	for(i = 1;i<5;i++)
	{
		if(min>arr[i])
		{
			min = arr[i];
		}
	}
	printf("%d",min);
	return 0;
}
