#include<stdio.h>
#include<conio.h>
int main()
{
	double i;
	double s=0;
	while(i<=50)
	{
		s=s+(1/i);
		i++;
		
	}
	printf("value of s=%f",s);
	getch();
}
