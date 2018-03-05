#include <stdio.h>
int main() 
{
	int n,rem,rev=0;
	printf("enter the number:");
	scanf("%d",&n);
	while(n!=0)
	{
	rem=n%10;
	rev=(rev*10)+rem;
	n=n/10;
	}
	n=rev;
	while(n!=0)
	{
	rem=n%10;
	if(rem%2==0)
	{
	printf("");
	}
	else
	{
	printf("%d \t",rem);
	}
	n=n/10;
	}
	return 0;
}
