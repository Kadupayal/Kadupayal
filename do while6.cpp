#include<stdio.h>
#include<conio.h>
int main()
{
	int i,add=0;
	i=10;
	do
	{
		add=add+i;
		i--;	
	}while(i>=1);
	{
		printf("%d",add);
	}
	getch();
}