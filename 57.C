#include<stdio.h>
int main()
{
	int p,q,t;
	printf("enter the values:");
	scanf("%d %d",&p,&q);
  t=p;
  p=q;
  q=t;
	printf("ater swapping:%d %d",p,q);
	return 0;
}
