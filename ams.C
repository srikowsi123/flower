#include<stdio.h>
#include<math.h>
int main()
{
int n,rem,result=0;
printf("enter the number:");
scanf("%d",&n);
while(n!=0)
{
rem=n%10;
result+=(rem*rem*rem);
n/=10;
if(result==n)
{
printf(" the number is amstrong ");
}
else
{
printf(" the number is not amstrong ");
}
}
return 0;
}
