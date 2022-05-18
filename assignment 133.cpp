#include<stdio.h>
int main()
{
	int i,a[5],b,size;
	printf("enter the size of array: ");
	scanf("%d",&size);
	printf("enter the array elements\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
    }
    for(i=0;i<size;i++)
    {
    	if(a[i]==(a[i+1]-1) && a[i]==a[i+2]-2)
    	{
    		b=1;
		}
	}
	if(b==1)
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
}

