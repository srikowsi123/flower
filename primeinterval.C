#include <stdio.h>
int main()
{
int a,b, i,t;
printf("Enter two numbers(intervals): ");
scanf("%d %d", &a, &b);
printf("Prime numbers between %d and %d are: ",a,b);
while (a<b)
{
t= 0;
for(i = 2; i <= a/2; ++i)
{
if(a% i == 0)
{
t= 1;
break;
}
}
if (t== 0)
printf("%d ",a);
++a;
}
return 0;
}
