#include<stdio.h>
#include<conio.h>
int main()
{
	char id;
	int salary;
	float hour,amount;
	printf("enter employed id");
	scanf("%c",&id);
	printf("total hour he wored\n");
	scanf("%f",&hour);
	printf("amount get per hours\n");
	scanf("%f",&amount);
	salary=hour*amount;
	printf("total salary=%d",salary);
	getch();
	
}
