#include<stdio.h>
#include<conio.h>
int main()
{
	int x,y,z;
	printf("enter three given number\n");
	scanf("%d%d%d",&x,&y,&z);
    if((x-y>=20) || (y-z>=20) || (z-x>=20))
    {
    	printf("true");
	}
	else
	{
		printf("false");
	}
}
