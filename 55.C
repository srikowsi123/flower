#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the number:");
	scanf("%d %d",&a,&b);
	c=a*b;
	if(c%2==0)
	printf("even number");
	else
	printf("odd number");
	return 0;
}
