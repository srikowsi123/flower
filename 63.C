#include <stdio.h>
int main()
{
    char sr[200];
    int n = 0, i;
    printf("enter the string\n");
    scanf("%[^\n]s", sr);
    for (i = 0;sr[i] != '\0';i++)
    {
        if (sr[i] == ' ')
        n++;    
    }
    printf("number of words in given string are: %d\n", n + 1);
}
