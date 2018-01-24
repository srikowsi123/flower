#include<stdio.h>
int main() 
{
int x[100],n,i;
int m(int,int[]);
int md(int,int[]);
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&x[i]);
printf("mean=%d\n",m(n,x));
printf("median=%d\n",md(n,x));
return 0;
}
int m(int t, int a[]) 
{
 int s=0, i;
 for(i=0; i<t; i++)
 s+=a[i];
 return((int)s/t);
}
int md(int u, int x[]) 
{
 int t;
 int i, j;
 for(i=0; i<u-1; i++) 
 {
   for(j=i+1; j<u; j++) 
   {
     if(x[j] < x[i]) 
     {
        t=x[i];
        x[i]=x[j];
        x[j]=t;
      }
    }
 }

 if(u%2==0) 
 {
   return((x[u/2]+x[u/2-1])/2.0);
 } 
 else 
 {
   return x[u/2];
 }
}
