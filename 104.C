#include <stdio.h>
int main()
{
int a,b;
int r= 1;
printf("Enter a base number: ");
scanf("%d", &a);
printf("Enter an exponent: ");
scanf("%d", &b);
while (b!= 0)
{
r*= a;
--b;
}
printf("Answer = %d", r);
return 0;
}
