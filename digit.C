#include <stdio.h>
int main()
{
int n;
int t=0;
printf("Enter an integer:");
scanf("%d",&n);
while(n!=0)
{
n/= 10;
++t;
}
printf("Number of digits: %d",t);
return 0;
}
