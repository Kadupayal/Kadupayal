#include<stdio.h>
#include<conio.h>
int main()
{
	int a[5],i;
	printf("enter array elements\n");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("reverse array elements\n");
	for(i=4;i>=0;i--)
	{
		printf("%d\n",a[i]);
		
	}
}
