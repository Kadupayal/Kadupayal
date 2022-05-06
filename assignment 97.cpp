#include<stdio.h>
#include<conio.h>
int main()
{
	int x,y,z;
	printf("enter three given number\n");
	scanf("%d%d%d",&x,&y,&z);
	if((y>x) && (z>y))
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
}
