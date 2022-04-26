#include<stdio.h>
#include<conio.h>
int main()
{
	int x, i;
	printf("enter an integer\n");
	scanf("%d",&x);
	printf("all the divisor of %d are",x);
	for(i=1;i<=x;i++)
	{
		if((x%2)==0)
		{
			printf("%d\n",i);
			printf("\n");
		}
	}
}
