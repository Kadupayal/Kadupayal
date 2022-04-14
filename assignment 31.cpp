#include<stdio.h>
#include<conio.h>
int main()
{
	int n1,n2;
	printf("enter a pair of number\n");
	printf("enter first number of pair\n");
	scanf("%d",&n1);
	printf("enter second number of pqair\n");
	scanf("%d",&n2);
	
	if(n1>n2)
	{
		printf("the pair is in descending order");
	}
	else
	{
		printf("the pair is in ascending order");
	}
	printf("\n");
}



