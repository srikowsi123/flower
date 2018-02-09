#include <stdio.h>
int main()
{
int n, sum = 0,i, value,avg;
printf("Enter the number of integers you want to add:");
scanf("%d", &n);
printf("Enter %d integers:",n);
for (i=1;i<= n;i++)
{
scanf("%d", &value);
sum = sum + value;
}
avg=sum/n;
printf("average is: %d",avg);
return 0;
}
