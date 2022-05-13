#include<stdio.h>
#include<conio.h>
int main()
{
	int i,a[6],size,num=0;
	printf("enter the size of array: ");
	scanf("%d",&size);
	printf("enter the array elements\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++)
	{
		if(a[i]==3 || a[i]==5)
		{
			num=1;
		} 
    }
    if(num=1)
    {
    	printf("array of integers contain 3 or a 5\n");
	}
	else
	{
		printf("array of integers not contain 3 or a 5\n");
	}
    
}
