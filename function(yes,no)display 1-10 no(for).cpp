
#include<stdio.h>
#include<conio.h>
void fun(int);
main()
{
	int num;
	printf("enter the number");
	scanf("%d",&num);
	fun(num);
}
void fun(int)
{
	int i;
	i=1;
	for(i=1; i<=10; i++)
	{
		printf("%d", i);
	}
}
