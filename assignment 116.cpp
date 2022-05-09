#include<stdio.h>
int main()
{
	int num1,num2,addi,sub,multi,div;
	
	printf("enter a two number\n");
	scanf("%d%d",&num1,&num2);
	
	addi=num1+num2;
	sub=num1-num2;
	multi=num1*num2;
	div=num1/num2;
	
	printf("the result of adding is=%d\n",addi);
	printf("the result of subtracting is=%d\n",sub);
	printf("the result of multiplying is=%d\n",multi);
	printf("the result of dividing is=%d\n",div);
				
}
