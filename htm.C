#include<stdio.h>
int main()
{
	int min,hrs,minutes;
	printf("enter the minutes:");
	scanf("%d",&min);
	hrs=min/60;
	minutes=min%60;
	printf("%d : %d",hrs,minutes);
	return 0;
}
