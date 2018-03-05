#include<stdio.h>
#include<string.h>
int main()
{
char s1[100],s2[100];
int p;
printf("enter the input \n");
scanf("%s",s1);
strcpy(s2,s1);
strrev(s1);
p=strcmp(s1,s2);
if(p==0)
{
printf("yes \n");
}
else
{
printf("no \n");
}
return 0;
}
