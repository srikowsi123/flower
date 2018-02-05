#include<stdio.h>
#include<string.h>
int main()
{
 int i;
 int char=0;
 char s[20];
 printf("Enter string : ");
 gets(s);
 for(i=0;s[i]!=0;i++)
 {
   char++;
   if(s[i]==' ')
 }
 printf("\nNumber of characters in string : %d",char);
 return 0;
}
