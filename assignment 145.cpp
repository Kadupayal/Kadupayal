#include<stdio.h>
#include<conio.h>
int main()
{
	int age;
	printf("Enter your age\n");
	scanf("%d",&age);
	
	if(age>=20)
	{
		printf("you look older than %d\n",age);
	}
	else
	if(age<=20)
	{
		printf("you look not older than %d",age);
	}
}
