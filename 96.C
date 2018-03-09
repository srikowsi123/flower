#include<stdio.h>
int main()
{
int n,i,t=0;
printf("Enter a positive integer: ");
scanf("%d",&n);
for(i=2;i<=n/2;++i)
{
if(n%i==0)
{
t=1;
break;
}
}
if(t==0)
printf("no");
else
printf("yes");
return 0;
}
