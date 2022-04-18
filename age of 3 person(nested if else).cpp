#include<stdio.h>
#include<conio.h>
int main()
{
	int p1,p2,p3;
	printf("enter age of three person");
	scanf("%d%d%d",&p1,&p2,&p3);
	
	if(p1>p2&&p1>p3)
	{
		("p1 is greater");
		
	}
	else
	if(p2>p1&&p2>p3)
	{
		printf("p2 is greater");
		
	}
	else
	if(p3>p1&&p3>p2)
	{
		printf("p3 is greater");
		
	}
	getch();
}