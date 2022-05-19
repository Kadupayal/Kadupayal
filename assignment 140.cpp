#include<stdio.h>
#include<conio.h>
int main()
{
	int i,f=0,size,a[10];
	printf("enter the array size: ");
	scanf("%d",&size);
	printf("enter array element\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++)
	{
		if(a[i+1]>=a[i])
		{
			f=f+1;
		}
	}
	printf("\n");
	if(f==size-1)
	{
		printf("value of each element is equal or greater than previous element");
	}
	else
	{
	printf("value of each element is not equal or greater than previous element");	
	}
}
