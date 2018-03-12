#include <stdio.h>
int main()
{
int n, s=1,i, value;
printf("Enter the number of integers:");
scanf("%d", &n);
printf("Enter %d integers:",n);
for (i=1;i<= n;i++)
{
scanf("%d", &value);
s = s * value;
}
printf("multiplication of entered integers:%d",s);
return 0;
}
