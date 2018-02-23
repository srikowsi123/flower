#include <stdio.h>
int main() 
{
	int n;
	printf("enter the number:");
	scanf("%d",&n);
	do
	{
	n=n+1;
	}while(n%10!=0);
	printf("%d",n);
	return 0;
}
