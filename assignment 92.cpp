#include<stdio.h>
#include<conio.h>
int main()
{
	int n1,n2,sum,diff;
	printf("enter two number\n");
	scanf("%d%d",&n1,&n2);
	sum=n1+n2;
	diff=n1-n2;
	if(n1==5 || n2==5 || sum==5 || diff==5 )
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
}
