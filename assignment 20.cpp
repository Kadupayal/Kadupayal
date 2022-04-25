#include<stdio.h>
#include<conio.h>
int main()
{
	float a,b,c,formulae;
	printf("enter the first number\n");
	scanf("%f",&a);
	printf("enter the second number\n");
	scanf("%f",&b);
	printf("enter the third number\n");
	scanf("%f",&c);
	formulae=(b*b)-(4*(a)*(c));
    if(formulae>0 &&  a!=0)
    {
    	float x,y;
    	formulae=(formulae);
    	x=(-b+formulae)/(2*a);
    	y=(-b-formulae)/(2*a);
    	printf("root1=%f\n",x);
    	printf("root2=%f\n",y);
	}
	else
	{
		printf("impossible to find te roots\n");
    }
	getch();
}
