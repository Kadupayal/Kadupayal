#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n;
	float x,y;
	printf("enter the values of x and n\n");
	scanf("%f%d",&x,&n);
	y=1.0;
	i=1;
	while(i<=n)
	{
		y=y*x;
		i++;
	}
	printf("x=%f ; n=%d\n x to power n=%f",x,n,y);
	
}
