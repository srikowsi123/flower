#include<stdio.h>
int main()
{
	int a[100],i,n,max;
	printf("enter the range:");
	scanf("%d",&n);
	printf("the values are:");
	for(i=0;i<n;i++)
	scanf("%d \n",&a[i]);
	max= a[0];
    for(i =1;i<n;i++)
    {
    	if (max< a[i])
      max=a[i];
    }
    printf(" the largest value is: %d",max);
    return 0;
}
