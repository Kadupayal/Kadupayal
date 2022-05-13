#include<stdio.h>
#include<conio.h>
int main()
{
	int i,a[6],size,num1=0,num2=0;
	printf("enter the size of array: ");
	scanf("%d",&size);
	printf("enter array element\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++)
	{
		if(a[i]==5&&a[i+1]==5)
		{
			num1=1;
		}
		if(a[i]==3&&a[i+1]==3)
		{
			num2=2;
		}
	}
	if(num1==1&&num2==2)
	{
		printf("it contains both 3 next to 3 and 5 next to 5");
		
	}
	else if(num2==2)
	{
		printf("it contains 3 next to 3");
		
	}
	else if(num1==1)
	{
		printf("it contains 5 next to 5");	
	}
	else
	{
		printf("not contain");
	}
	
}
