#include<stdio.h>
#include<conio.h>
int main()
{
	int n[7], i,x;
	printf("enter the first number of the array\n");
	scanf("%d",&x);
	for(i=0;i<7;i++)
	{
		n[i]=x;
		x=3*x;
		
	}
	for(i=0;i<7;i++)
	{
		printf("n[%d]=%d\n",i,n[i]);
	}
}
