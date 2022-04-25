#include<stdio.h>
#include<conio.h>
int main()
{
	int p,q,r,s;
	printf("enter the first integer\n");
	scanf("%d",&p);
	printf("enter the second integer\n");
	scanf("%d",&q);
	printf("enter the third integer\n");
	scanf("%d",&r);
	printf("enter the forth integer\n");
	scanf("%d",&s);
    if((q>r) && (s>p) && ((r+s)>(p+q)) && (r>0) && (s>0) && (p%2==0))
    {
    	printf("correct values\n");
	}
	else
	{
		printf("wrong values\n");
    }
	getch();
}
