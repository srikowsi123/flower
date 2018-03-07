#include<stdio.h>
int main()
{
	int x,y,gcd,i,lcm;
	printf("enter the number:");
	scanf("%d %d",&x,&y);
	for(i=1;i<=x && i<=y;i++)
	{
		if(x%i==0 && y%i==0)
		{
			gcd=i;
		}
		lcm=(x*y)/gcd;
	}
		printf("lcm :%d",lcm);
	return 0;
}
