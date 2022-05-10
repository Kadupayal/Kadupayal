#include<stdio.h>
int main()
{
	int a[10],i,even=0,n;
	printf("enter integer number\n",n);
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("even numbers in the array are\n");
	for(i=0;i<10;i++)
	{
		if(a[i]%2==0)
		{
			printf("%d ",a[i]);
			even++;
		}
	}
	printf("count total even numbers=%d\n",even);
}
