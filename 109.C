#include<stdio.h>
int main()
{
int a[100],i,min;
printf("the values are:");
for(i=0;i<10;i++)
scanf("%d \n",&a[i]);
min=a[0];
for(i =1;i<10;i++)
{
if (min>a[i])
min=a[i];
}
printf(" the largest value is: %d",min);
return 0;
}
