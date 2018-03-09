#include <stdio.h>

#include<string.h>

int main() 

{
	
char s[100];
	
int i,flag;
	
printf("enter the string:\n");
	
scanf("%s",s);
	
for(i=0;s[i]!='\0';i++)
	
{
		
if(s[i]==s[i+1])
		
{
			
flag=1;
			
break;
		
}
	
}
	
if(flag==1)
	
{
		
printf("no \n");
	
}
	
else
	
{
		
printf("yes \n");
	
}
	
return 0;

}
