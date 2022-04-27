#include<stdio.h>
#include<conio.h>
int main()
{
	int num, n1;
	printf("enter a positive number less than 500\n");
	scanf("%d",&num);
	
	if(num<1 || num>999)
	{
		printf(" the given number is out of range\n");
		
	}
	else
	{
		n1 += num % 10;
		num=num/10;
		n1 += num%10;
		num=num/10;
		n1 +=num%10;
		
		printf("sum of the digits of %d is %d",num,n1);
	}
}
