#include<stdio.h>
int main()
{
	int a;
	printf("enter a number");
	scanf("%d",&a);
	if(a%13==0 || a%13==1)
	{
		printf("multiple of 13 or it is one more than a mupltiple of 13");
	}
	else
	{
		printf("not multiple by 13");
	}
}
