#include <stdio.h>
#include<string.h>
int main()  
{
    char s[100];
    int i,n=0;
    printf("\n enter the contents of paragraph");
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]==' ')
        {
            n++;
        }
    }
        printf("no.of lines:%d",n);
 
	return 0;
}
