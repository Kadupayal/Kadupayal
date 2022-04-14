//cartwsian system (find the quadrant which it belongs)
#include<stdio.h>
#include<conio.h>
int main()
{
	int x,y;
	printf("enter the coordinate (x,y)");
	printf("enter the first coordinate\n");
	scanf("%d",&x);
	printf("enteer the second coordinate\n");
	scanf("%d",&y);
	
	if(x>0&&y>0)
	{
		printf("Quadrant-1\n");
	}
	else
	if(x>0&&y>0)
	{
		printf("Quadrant-2\n");
		
	}
	else
	if(x<0&&y<0)
	{
		printf("Quadrant-3\n");
	}
	else
	if(x<0&&y>0)
	{
		printf("Quadrant-4\n");
	}
	return 0;
	
}
