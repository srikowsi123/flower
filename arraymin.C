#include<stdio.h>
int main()
{
	int a[100],i,n,min;
	printf("enter the range:");
	scanf("%d",&n);
	printf("the values are:");
	for(i=0;i<n;i++)
	scanf("%d \n",&a[i]);
	min=a[0];
    for(i =1;i<n;i++)
    {
      if (min>a[i])
      min=a[i];
    }
    printf(" the smallest value is: %d",min);
    return 0;
}
