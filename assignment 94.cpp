#include<stdio.h>
int main()
{
	int a;
	printf("enter a non-negative number");
	scanf("%d",&a);
	if((a%3==0) && (a%3!=0))
	{
		if(a%7!=0)
		{
		 printf("multiple of 3");
	    }
	}
	else
	{
		printf("not mupltiple of 3\n");
	}
	if((a%7==0) && (a%7!=0))
	{
		if(a%3!=0)
		{
		 printf("multiple of 7");
	    }
	}
	else
	{
		printf("not multiple of 7");
	}
} 
