#include <stdio.h>
int main()
{
int n,a,b;
printf("enter the range:");
scanf("%d %d",&a,&b);
printf("Print Odd Numbers in a given range m to n:");
for(n=a; n<= b; n++)
{
if (n%2==1)
printf("%d",n);
}
return 0;
}
