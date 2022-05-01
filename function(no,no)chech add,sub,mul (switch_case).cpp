#include<stdio.h>
#include<conio.h>
void fun();
int main()
{
	 fun();
}
void fun()
{
	int num1,num2,res,choice;
	printf("enter 1 or 2 or 3");
	scanf("%d",&choice);
	switch(1)
	{
		case 1:
		
		printf("addition of two number");
		scanf("%d%d",&num1,&num2);
		res=num1+num2;
		printf("res=%d",res);
		break;
		case 2:
		
		printf("subtraction of two number");
		scanf("%d%d",&num1,&num2);
		res=num1-num2;
		printf("res=%d",res);
		break;
		case 3:
		
		printf("multiplication of two number");
		scanf("%d%d",&num1,&num2);
		res=num1*num2;
		printf("res=%d",res);
		break;
		default:
		printf("i am in default");
	}
	
}
