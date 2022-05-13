#include<stdio.h>
#include<conio.h>
int main()
{
	int i,a[10],size,count=0;
	printf("enter the size of array: ");
	scanf("%d",&size);
	printf("enter the array elements\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		if(a[i]==5 || (a[i]==7))
		{
			count=count+1;
		}
	}
	if(count=count+1)
	{
		printf("it contains 5's or 7's''");
	}
	else
	{
		printf("not contain");
    }
}
