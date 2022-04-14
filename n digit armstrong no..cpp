//enter n digit number and check armstron or not
#include<stdio.h>
#include<conio.h>
int main()
{
	int num,n1,sum,backup;
	printf("enter a number\n");
	scanf("%d",&num);
	backup=num;
	
	while(num>0)
	{
		n1=num%10;
		sum=sum+(n1*n1*n1);
		num=num/10;		
	}
	if(backup=sum)
	{
		printf("armstrong number");		
	}
	else
	{
		printf("number is not armstrong");
	}
	getch();
}
