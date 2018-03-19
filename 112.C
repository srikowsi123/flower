#include <stdio.h>
int main() 
{
int i,n,k,a[50],t;
scanf("%d %d",&n,&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]==k)
{
t=1;
break;
}
}
if(t==1)
{
printf("yes");
}	
else
{
printf("no");
}
return 0;
}
