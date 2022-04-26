#include<stdio.h>
#include<conio.h>
int main()
{
	int i;
	printf("even number between 1 to 50\n");
	
	for(i=1;i<=50;i++)
	{
		if(i%2==0)
		{
			printf("%d",i);
		}
	}
}
