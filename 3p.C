#include <stdio.h>
int main(void) 
 {
 int n,r,re=0;
 printf("enter the number:");
 scanf("%d",&n);
 while(n!=0)
 {
 r=n%10;
 re=re*10+r;
 n=n/10;
 }
 printf("\n%d",re);
return 0;
 }
