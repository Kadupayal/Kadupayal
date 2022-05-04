
#include<stdio.h>
#include<conio.h>
void fun(int,int,int);
main()
{
	int a,b,c;
	printf("enter age of three person");
	scanf("%d%d%d",&a,&b,&c);
	fun(a,b,c);
}
void fun(int,int,int)
{
	int p1, p2, p3;
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
	if(p3>p1 && p3>p2)
	{
		printf("p3 is greater");
	}
}
