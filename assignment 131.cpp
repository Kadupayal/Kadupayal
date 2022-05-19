
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,a[10],size,b=0,c=0;
	printf("enter the size of array: ");
	scanf("%d",&size);
	printf("enter array element\n");
	for(i=0;i<size;i++)
	{
		printf("a[%d]= ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++)
	{
	if(a[i]==5)
	{
		if((a[i]==5&&a[i+1]==5)||(a[i]==5&&a[i-1]==5))
		{
			b=1;
		}
		else
		{
			c=1;
		}	
	}
		
	}
	if(b==1 && c!=1)
	{
		printf("true");
	}
	else if(c==1)
	{
		printf("false");
		
	}
	
}

