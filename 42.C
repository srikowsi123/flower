#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100],s2[100];
	int l,m;
	printf("enter the first string:");
	gets(s1);
	printf("enter the second string:");
	gets(s2);
	l=strlen(s1);
	m=strlen(s2);
	if(l==m)
	{
		printf("%s",s2);
	}
	else
	{
		if(l>m)
		printf("%s",s1);
		else
		printf("%s",s2);
	}
	return 0;
}
