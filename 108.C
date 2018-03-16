#include<stdio.h>
int main()
{
int a,i,d,n,sum=0;
printf("enter the value:");
scanf("%d %d %d",&a,&n,&d);
for(i=0;i<n;i++)
{
sum=sum+(a+(n*d));
}
printf("AP: %d",sum);
return 0;
}
