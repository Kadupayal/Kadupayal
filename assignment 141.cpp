#include<stdio.h>
#include<conio.h>
int main()
{
	int i,b=0,size,a[10];
	printf("enter the array size: ");
	scanf("%d",&size);
	printf("enter array element\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<size-1;i++)
	{
		if(a[i+1]==a[i] && a[i]==15)
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
