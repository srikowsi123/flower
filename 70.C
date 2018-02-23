#include<stdio.h>
int main()
{
int num,i,x,y,z;
printf("enter the number:\n");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
x=pow(2,i);
if(x>num)
{
y=i;
break;
}
}
z=pow(2,y);
printf("%d",z);
return 0;
}
