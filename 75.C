#include <stdio.h>
#include<string.h>
int main() 
	
{
	char s[100];
	int l;
	printf("enter the string:");
	scanf("%s",s);
	l=strlen(s);
	if(l%2==0)
	{
		s[l/2]='*';
		s[(l/2)-1]='*';
	}
	else
	{
		s[l/2]='*';
	}
	printf("\n%s",s);
	return 0;
}
