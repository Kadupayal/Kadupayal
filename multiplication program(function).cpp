#include<stdio.h>
#include<conio.h>
int mul();
int main()
{
	mul();
}
	int mul()
	{
	int num1,num2,res;
	printf("enter two number");
	scanf("%d%d",&num1,&num2);
	res=num1*num2;
	printf("%d",res);
    }
