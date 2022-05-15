#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,a[5],size,temp;
	printf("enter the array size: ");
	scanf("%d",&size);
	printf("enter array element\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++)
	{
		for(j=0;j<size-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("after sorting\n");
	for(i=0;i<size;i++)
	{
		printf("%d\n",a[i]);
	}
}
