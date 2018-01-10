#include <stdio.h>
int main()
{
int n, rev = 0, r;
printf("Enter an integer: ");
scanf("%d", &n);
while( n!=0 )
{
rem= n%10;
rev = rev*10 + r;
n /= 10;
}
if (n== rev)
printf("%d is a palindrome.",n);
else
printf("%d is not a palindrome.",n);
return 0;
}
