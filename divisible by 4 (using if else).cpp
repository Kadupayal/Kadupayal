#include<stdio.h>
#include<conio.h>
int main()
{
	int num,r;
	printf("enter any number");
	scanf("%d",&num);
	r=num%4;
	if(r==0)
	{
		printf("num divisible by four");
		
	}
	if(r!=0)
	{
		printf("num not divisible by four");
	}
	getch();
}