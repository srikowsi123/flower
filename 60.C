#include <stdio.h>
int main()
{
int i,n,p=0,q=1,r;
printf("Enter the number of terms: ");
scanf("%d",&n);
printf("Fibonacci Series: ");
for(i=0;i<n;++i)
{
printf("%d \n",q);
r=p+q;
p=q;
q=r;
}
return 0;
}
 
