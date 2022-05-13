#include<stdio.h>
#include<conio.h>
int main()
{
	int a[6],i,sum=0,size;
	printf("enter the size of array: ");
	scanf("%d",&size);
	printf("enter the array elements\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++)
	{
		if(a[i]==5)
		sum=sum+5;
	   
	}
	if(sum==15)
	{
		printf("sum of all 5's are exactly 15");
	
	}
	else
	{
		printf("sum of all 5's are not exactly 15");
	}
}
