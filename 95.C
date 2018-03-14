#include<stdio.h>
int main()
{
int p,t,r,s;
float si;
printf("enter the value:");
scanf("%d %d %d",&p,&t,&r);
s=(p*t*r);
si=(s/100);
printf("the simple interest: %f",si);
return 0;
}
