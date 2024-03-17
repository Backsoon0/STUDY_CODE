#include<stdio.h>

int main()
{
	int s = 0;
	int hours,mintues;
	scanf("%d", &s);
	mintues = s/60;
	s %= 60;
	hours = mintues / 60;
	mintues %= 60;
	printf("%d %d %d", hours, mintues, s);
}
