#include<stdio.h>
int main()
{
int a,b,c,i,l;
printf("enter total no.of rows to be calculated:\n");
scanf("%d",&l);
for(i=0;i<l;i++)
{
printf("enter the numbers:\n");
scanf("%d \t %d",&a,&b);
c=a-b;
printf("the remaining members are: %d \n",c);
}
return 0;
}
