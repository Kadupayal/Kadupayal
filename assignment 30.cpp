#include<stdio.h>
#include<conio.h>
int main()
{
	int n1,i;
	printf("enter an integer");
	scanf("%d",&n1);
	printf("square of each one of the even values from 1 to %d\n");
	for(i=2;i<=n1;i++)
	{
		if((i%2)==0)
		{
		 printf("%d^2=%d\n",i,i*i);
        }
	}
}
