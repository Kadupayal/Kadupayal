#include<stdio.h>
#include<conio.h>
int main()
{
	int i, n, a[5];
	printf("enter the five elements of the array\n");

	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<5;i++)
	{
			
	if(a[i]<5)
	{
		printf("a[%d] =%d\n",i,a[i]);	
	}		
    }

}
