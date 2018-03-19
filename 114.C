#include <stdio.h>
int main() 
{
int n,k,i,a[10],t=0;
scanf("%d %d",&n,&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]%2==1)
{
t++;
}
if(t==k)
{
printf("odd number: %d",a[i]);
break;
}
}
return 0;
}
