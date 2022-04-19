#include<stdio.h>
#include<conio.h>
int main()
{
	int i; 
	i=1;
	do
	{
      printf("%d",&i);
	  i++;		
	}while(i<=10);
	{
		if(i%2==0)
		{
			printf("even number\n");
		}
	}
	getch();
}