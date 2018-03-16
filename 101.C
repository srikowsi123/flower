#include <stdio.h>
#include<string.h>
int main()
{ 
char a[100];
int n,l,i,c=0;
scanf("%s",a);
scanf("%d",&l);
n=strlen(a);
for(i=n-1;i>=0;i--)
{
printf("%c",a[i]);
c++;
if(l==c)
{
break;
}
}
return 0;
}
