
#include<stdio.h>
#include<conio.h>
void fun(int);
main()
{
	int num;
	printf("enter 1 to 10 number");
	scanf("%d",&num);
	fun(num);
}
void fun(int)
{
	int i;
	i=1;
	while(i<=10)
	{
		printf("%d",i);
		i++;
	}
}
