#include<stdio.h> 
int main()
{
int m,n,rem,i;
printf("   Give the First number for the Range :");
scanf("%d",&m);
printf("   Give the Final number for the Range :");
scanf("%d",&n);
printf("\n The Even numbers between %d and %d are ",m,n); 
for(i=m; i<=n; ++i){
rem = i % 2;
if(rem == 0)
printf("%d",i);
}
return 0; 
} 
