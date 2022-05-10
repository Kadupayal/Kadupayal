#include<stdio.h>
int main()
{
	int i,a[7],sw,n;
	printf("enter the number of elements\n");
	scanf("%d",&n);
	printf("elements in original array are");
	for(i=0;i<7;i++)
	{
		scanf("%d",&a[i]);
	
	}
	
	sw=a[0];
	a[0]=a[7-1];
	a[7-1]=sw;
	printf("after swapping first and last element\n");
	for(i=0;i<7;i++)
	{
		printf("%d ",a[i]);
	}
}
