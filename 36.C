#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	int n=0,i;
	printf("enter the strings:");
	gets(s);
	for(i=0;s[i]!='\0';i++)
	if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
	{
	printf("\n");	
	}
	else
	{
	n++;
	}
	printf("no.of special characters: %d",n);
            return 0;
}
