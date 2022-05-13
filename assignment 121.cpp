#include<stdio.h>
#include<conio.h>
int main()
{
	int i,a[7],size,count=0;
	printf("enter the size of array: ");
	scanf("%d",&size);
	printf("enter the array elements\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++)
	{
		if(a[i]==5 && (a[i+1]==5))
		{
			count=count+1;
		}
	}
	if(	count=count+1)
	{
		printf("it contains 5 next to 5 somewhere");
	}
	else
	{
		printf("not contain");
	
    }
}
