#include <stdio.h>
int main()
{
char c;
int u,l;
printf("Enter an alphabet: ");
scanf("%c",&c);
lwr=(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
upr=(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
if (l||u)
printf("%c is a vowel.", c);
else
printf("%c is a consonant.", c);
return 0;
}
