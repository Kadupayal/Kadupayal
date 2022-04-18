#include<stdio.h>
#include<conio.h>
int main()
{
    int choice;
	printf("press 1 for addi\n");
	printf("press 2 for sub\n");
	printf("press 3 for multi\n");
	printf("press 4 for div\n");	
	printf("enter your choice");
	scanf("%d,&choice");
	if(choice==1)
	{
		int num1,num2,res;
		printf("addition of two number");
		scanf("%d%d",&num1,&num2);
		res=num1+num2;
		printf("addittion=%d",res);
	}
	else
	if(choice==2)
	{
		int num1,num2,res;
		printf("subtraction of two number");
		scanf("%d%d",&num1,&num2);
		res=num1-num2;
		printf("subtraction=%d",res);
	}
	else
	if(choice==3)
	{
		int num1,num2,res;
		printf("multiplication two number");
		scanf("%d%d",&num1,&num2);
		res=num1*num2;
		printf("multiplication=%d",res);
	}
	else
	if(choice==4)
	{
		float num1,num2,res;
		printf("division of two number");
		scanf("%f%f",&num1,&num2);
		res=num1/num2;
		printf("division=%f",res);
	}
	else
	{
	printf("invalid choice");
	}
	
	
}