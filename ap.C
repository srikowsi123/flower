#include<stdio.h>
int main()
{
      int n,i;
      int s=0;
      printf("\n\nEnter Value of N : ");
      scanf("%d",&n);
      s=(n*(n + 1))/2;
      for(i =1;i<=n;i++)
      {
        if (i!=n)
        printf("%d + ",i);
        else
        printf("%d ",i);
      }
      printf("\n\nSum of Series = %d",s);
      return 0;
}
