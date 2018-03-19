#include<stdio.h>
int main()
{
int n,f=1,i;
printf("enter the value of n:\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
f=f*i;
printf("the factorial: %d",f);
return 0;
}
