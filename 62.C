#include <stdio.h>
#include<string.h>
int main()
{
char s[10];
scanf("%s",s);
int i,temp=0,l;
l=strlen(s);
for(i=0;i<l;i++)
{
if(s[i]=='1' || s[i]=='0')
{
temp=1;
}
else
{
temp=0;
}
}
if(temp==1)
{
printf("yes");
}
else
{
printf("no");
}
return 0;
}
