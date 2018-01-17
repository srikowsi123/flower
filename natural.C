#include <stdio.h>
int main()
{
int n, i,a= 0;
printf("Enter a positive integer: ");
scanf("%d",&n);
for(i=1; i <= n; ++i)
{
a+= i;  
}
printf("Sum = %d",a);
return 0;
}
