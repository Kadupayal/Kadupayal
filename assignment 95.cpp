#include<stdio.h>
int main()
{
	int a;
	printf("enter a number");
	scanf("%d",&a);
	if(a%10<=2)
	{
		printf("number is within 2 of a multiple of 10");
	}
	else
	{
		printf("number is not within 2 of a multiple of 10");
	}
}
