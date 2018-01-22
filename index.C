#include<stdio.h>
 
int main() 
{
int i,a[50],n;
printf("\nEnter no of elements :");
scanf("%d",&n);
printf("\nEnter the values :");
for(i=0;i<n;i++) 
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++) 
{
printf("\[%d] = %d \n", i, a[i]);
}
return (0);
}
