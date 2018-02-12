#include <stdio.h>
int main() 
{
    int i,k;
    printf("enter the value:");
    scanf("%d %d",&i,&k);
    printf("before swapping %d %d", i, k);
    i = i ^ k;
    k = i ^ k;
    i = i ^ k;
    printf("after swapping %d %d", i, k);
    return 0;
}
