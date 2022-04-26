#include<stdio.h>
#include<conio.h>
int main()
{
	int n[7], i,x;
	printf("enter the 7 elements of the array\n");
	for(i=0;i<7;i++)
	{
		scanf("%d",&x);
		if(x>0)
		{
			n[i]=x;
		}
		else
		{
			n[i]=100;
		}
	}
	printf("array values are\n");
	for(i=0;i<7;i++)
	{
		printf("n[%d]=%d\n",i,n[i]);
	}
}
