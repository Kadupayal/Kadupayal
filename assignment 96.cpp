#include<stdio.h>
int main()
{
	int a ,b, c;
	printf("enter a three number");
	scanf("%d%d%d",&a,&b,&c);
	if((a==b+c) || (b==a+c) || (c==a+b))
	{
		printf("possible to add");
	}
	else
	{
		printf("not possible to add");
	}
}
