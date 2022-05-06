#include<stdio.h>
#include<conio.h>
int main()
{
	int n1, n2,rem1,rem2;
	printf("enter two number\n");
	scanf("%d%d",&n1,&n2);
	rem1=n1%5;
	rem2=n2%5;
    if(n1==n2)
    {
    	printf("0");
	}
	else
	if(rem1==rem2)
	{
		if(n1>n2)
		{
			printf("%d is smaller integer",n2);
		}
		else
		{
			printf("%d is smaller integer",n1);
		}
	}
	else
	{
		if(n1>n2)
		{
			printf("%d is larger integer",n2);
		}
		else
		{
			printf("%d is larger integer",n1);
		}
	}
	
}
