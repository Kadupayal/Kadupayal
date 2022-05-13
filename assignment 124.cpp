#include<stdio.h>
#include<conio.h>
int main()
{
	int i,a[6],size,num1,num2;
	printf("enter the size of array: ");
	scanf("%d",&size);
	printf("enter the array elements\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++)
	{
		if(a[i]==3)
		{
		  num1++;
	    }
		else
		if(a[i]==5)
		{
		  num2++;
	    }
	    else
	    {
		}
    }
	if(num1>num2)
	{
		printf("the number of 3's is greater than the number of 5's");
	}
	else
	{
		printf("the number of 3's is not greater than the number of 5's");
	}
}
