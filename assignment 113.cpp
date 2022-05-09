#include<stdio.h>
int main()
{
	int a1[3],a2[3],a3[6];
	int i,n1,n2,j=0;
	
	printf("enter number of elements in first array\n");
	scanf("%d",&n1);
	for(i=0;i<n1;i++)
	{
		scanf("%d",&a1[i]);
	}
	
	printf("enter number of elements in second array\n");
	scanf("%d",&n2);
	for(i=0;i<n2;i++)
	{
		scanf("%d",&a2[i]);
	}
	
	for(i=0;i<n1;i++)
	{
		a3[j]=a1[i];
		j++;
	}
	for(i=0;i<n2;i++)
	{
		a3[j]=a2[i];
		j++;
	}
	
	printf("the new array is\n");
	for(i=0;i<(n1+n2);i++)
	{
		printf("%d\n",a3[i]);
	}
	
}
