#include<stdio.h>
#include<conio.h>
int main()
{
	int i,a[6],size,num1;
	printf("enter the size of array: ");
	scanf("%d",&size);
	printf("enter the array elements\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++)
	{
		if(a[i]==5 && a[i+1]==5 || a[i+2]==5)
		num1=1;
	}
	if(num1==1)
	{
		printf("true");
	}
	else
	{
		printf("false");
		
	}
}
	
