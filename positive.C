#include<stdio.h>
int main()
{
int n;
printf("enter the number:");
scanf("%d",&n);
if(n==0)
printf("neither positive nor negative");
else if(n>=1)
printf("the num is positive");
else
printf("the num is negative");
}
