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
if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
{
t=1;
}
}
if(t==1)
{
printf("yes");
}
else
{
 printf("no");
}
return 0;
}
