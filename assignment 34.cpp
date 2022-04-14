//reads two number and divide the first number by second number.if division not possible print "division not possible"
#include<stdio.h>
#include<conio.h>
int main()
{
	int num1,num2,division,y;
	printf("enter two number:");
	printf("enter first number\n");
	scanf("%d",&num1);
	printf("enter second number\n");
	scanf("%d",&num2);
	
	if(y!=0)
	{
		division=num1/num2;
		printf("%d\n",division);		
	}
	else
	{
		printf("division not possible\n");		
	}
	getch();
}
