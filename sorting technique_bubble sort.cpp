#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,a[10],size,temp;
	printf("enter the array size: ");
	scanf("%d",&size);
	printf("enter array element\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("after sorting\n");
	for(i=0;i<size;i++)
	{
		printf("%d\n",a[i]);
	}
}
