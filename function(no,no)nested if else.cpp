#include<stdio.h>
int age();
int main()
{
	age();
}
int age()
{
	int p1, p2, p3;
	printf("enter age of 3 person");
	scanf("%d%d%d",&p1,&p2,&p3);
	if(p1>p2 && p1>p3)
	{
		printf("p1 is greater");
	}
	else
	if(p2>p1 && p2>p3)
	{
		printf("p2 is greater");
		
	}
	else
	{
		printf("p3 is greater");
	}
}

