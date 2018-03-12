#include<stdio.h>
int main()
{
int l,b,h,area,volume,v;
printf("enter the value: \n");
scanf("%d %d %d",&l,&b,&h);
area=l*b*h;
v=(l*b)+(b*h)+(h*l);
volume=2*v;
printf("total surface area: %d \n",area);
printf("volume of cuboid:%d \n",volume);
return 0;
}
