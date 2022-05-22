#include<stdio.h>
int main()
{
	int age;
	printf("enter the age of the candidate: ");
	scanf("%d",&age);
	if(age<18)
	{
		printf("you are not eligible to caste your vote\n");
		printf("you would be able to caste your vote after %d year\n",18-age);
	}
	else
	{
		printf("you are eligible for casting your vote\n");
	}
}
