#include <stdio.h>


int main() 

{
	
int x,y,i;
	
char opr;
	
printf("\n enter the two numbers:\n");
	
for(i=1;i<=4;i++)
	
{
		
scanf("%d %c %d",&x,&opr,&y);
		
if(opr=='/')
		
{
			
printf("%d\n",x/y);
			
break;
		
}
		
else
		
{
			
printf("%d\n",x%y);
			
break;
		
}
	
}
	
return 0;

}
