#include <stdio.h>
#include <string.h>
int main()
{
	char arr[100];
	printf("Enter a string to reverse\n");
	gets(arr);
	strrev(arr);
    if(arr==strrev(arr))
    printf("yes");
    else
    printf("no");
	return 0;
}
