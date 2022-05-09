#include<stdio.h>
#include<conio.h>
int main()
{
	int i, a[5];
	printf("enter original array\n");
	
	for(i=0;i<5;i++)
	{
		printf("a[%d]= ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		if(i==1 || i==2 || i==3)
		continue;
		printf("a[%d]=%d\n",i,a[i]);
	}
}

