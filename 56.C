#include<stdio.h>
#include<string.h>
int main()
{
char s[100];
int i;
printf("enter the string:");
gets(s);
int a=0,d=0;
for(int i=0;s[i]!=0;i++)
{
if((s[i]>='a'&& s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
{
a++;
}
if(s[i]>='0' && s[i]<='9')
{
d++;
}
}
if(a>=1 && d>=1)
{
printf("yes");
}
else
{
printf("no");
}
return 0;
}
