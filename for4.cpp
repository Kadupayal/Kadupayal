#include<stdio.h>
#include<conio.h>
int main()
{
	int i;
	printf("odd number");
	for(i=1;i<=10;i++)
	{
		
		if(i%2!=0)
		{
			printf("%d",i);
		}
		i++;
	}
	getch();
}