#include <stdio.h>
int main()
{
int a,b,d,sum = 0;
printf("Enter the number \n");
scanf("%d",&a);
b=a;
while(b>0)
{
d=b%10;
sum =sum+d;
b/=10;
}
printf("Sum of the digits  = %d\n", sum);
return 0;
}
