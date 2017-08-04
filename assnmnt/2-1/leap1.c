#include<stdio.h>

int main()
{
	int year;
	printf("enter the year\n");
	scanf("%d",&year);
	(year%4==0?printf("leap year"):printf("not leap year"));
	return 0;
}
