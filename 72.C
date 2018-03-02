#include <stdio.h>
#include<string.h>
int main() 
{
char s[10];
int m,i,t=0;
gets(s);
m=strlen(s);
for(i=0;i<m;i++)
{
if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
{
printf("yes");
t=1;
break;
}
}
if(t==0)
{
printf("no");
}
return 0;
}
