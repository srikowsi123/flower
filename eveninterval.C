#include<stdio.h> 
int main()
{
int a,b,r,i;
printf("   Give the First number for the Range :");
scanf("%d",&a);
printf("   Give the Final number for the Range :");
scanf("%d",&b);
printf("\n The Even numbers between %d and %d are ",a,b); 
for(i=a; i<=b; ++i)
{
r = i % 2;
if(r == 0)
printf("%d \n",i);
}
return 0; 
} 
