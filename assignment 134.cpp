#include<stdio.h>
int main()
{
	int i,a[5],temp,size;
	printf("enter the size of array: ");
	scanf("%d",&size);
	printf("enter the array elements\n");
	for(i=0;i<=size-1;i++)
	{
		scanf("%d",&a[i]);
    }
    temp=a[0];
    for(i=1;i<=size-1;i++)
    {
    	a[i-1]=a[i];
    }
    a[size-1]=temp;
    printf("thr new array is\n");
    for(i=0;i<=size-1;i++)
    {
    	printf("%d\n",a[i]);
	}
}
