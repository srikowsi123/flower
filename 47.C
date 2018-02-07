#include<stdio.h>
int main()
{
	int a[100],i,n,max,min;
	printf("enter the limit:");
	scanf("%d",&n);
	printf("the values are:");
	for(i=0;i<n;i++)
	scanf("%d \n",&a[i]);
	
    min=a[0];
    for(i =1;i<n;i++)
    {
     if(min>a[i])
     min=a[i];	
    }
    printf(" the smallest value is: %d",min);
	max=a[0];
    for(i =1;i<n;i++)
    {
      if (max<a[i])
      max=a[i];
    }
    printf(" the largest value is: %d",max);
    return 0;
}
