
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
		
		if(a[i]%2==0&&a[i+1]%2==0)
		{
			num1=1;
		}
		else if(a[i]%2!=0&&a[i+1]%2!=0)
		{
			num2=2;
		}
		else
		{
			
		}
	}
	printf("\n");
	if(num1==1||num2==2)
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
}
