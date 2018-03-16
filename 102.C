#include<stdio.h>
int main()
{
int n,d;
printf("enter the number:");
scanf("%d",&n);
if(n%2==0)
{
d=n/2;
printf("%d",d);
}
else
{
printf("%d",n);
}
return 0;
}
