#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	int n;
	printf("enter the string:");
	gets(s);
	printf("enter the number:");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	printf("%s",s);
	return 0;
}
