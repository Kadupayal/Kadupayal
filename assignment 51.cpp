#include<stdio.h>
#include<conio.h>           
int main()
{
    int num1,num2;
	printf("enter two number\n");
	scanf("%d %d",&num1,&num2);
	printf("before swapping=%d %d\n",num1,num2);
	num1=num1+num2;
	num2=num1-num2;
	num1=num1-num2;
	
	printf("after swapping=%d %d\n",num1,num2);
	printf("num1=%d num2=%d", num1,num2);
}
