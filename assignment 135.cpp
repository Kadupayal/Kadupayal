#include<stdio.h>
#include<conio.h>
int main()
{
	int i,size,a[10];
	printf("enter array size: ");
	scanf("%d",&size);
	printf("enter array element\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf(" the new array is\n");
	for(i=0;i<size;i++)
	{
		if(a[i]==5)
		{
			break;
		}
		printf("%d\n",a[i]);
	}

}
