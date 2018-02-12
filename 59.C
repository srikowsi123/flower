#include<stdio.h>
int main()
{
	int n[100],i,b=10,max;
	printf("the values are:");
	for(i=0;i<b;i++)
	scanf("%d \n",&n[i]);
	max=n[0];
    for(i =1;i<b;i++)
    {
      if (max<n[i])
      max=n[i];
    }
    printf(" the largest value is: %d",max);
    return 0;
}
