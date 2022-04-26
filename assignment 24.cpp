#include<stdio.h>
#include<conio.h>
int main()
{
	int x,y;
	printf("enter the first number\n");
	scanf("%d",&x);
	printf("enter the second number\n");
	scanf("%d",&y);
    
    if(x>y)
    {
    	int sw;
    	sw=x;
    	x=y;
    	y=sw;
	}
	if((y%x)==0)
	{
		printf("multiplied\n");
	}
	else
	{
		printf("not multiplied\n");
	}
}



