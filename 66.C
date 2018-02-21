#include <stdio.h>
int main()
{
int a, i,t=0;
printf("Enter a positive integer: ");
scanf("%d",&a);
for(i=2; i<=a/2; ++i)
{
if(a%i==0)
{
t=1;
break;
}
}
if(t==0)
printf("yes");
else
printf("no");
return 0;
}
