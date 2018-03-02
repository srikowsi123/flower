#include <stdio.h>
int main() 
{
	int a,b,c,i,t=0;
	printf("enter the two number: \n");
	scanf("%d %d",&a,&b);
	c=a*b;
	for(i=1;i<=c/2;i++)
	{
		if(i*i==c)
		{
			t=1;
			break;
		}
	
	}
	if(t==1)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
