#include<stdio.h>
int main()
{
	int a[4],i,temp;
	printf("enter array elements\n");
	for(i=0;i<4;i++)
	{
		scanf("%d",&a[i]);
    }
    temp= a[0];
    for(i=0;i<4;i++)
     a[i]=a[i+1];
     a[4-1]=temp;
     
     printf("after rotate the elements in left direction\n");
     for(i=0;i<4;i++)
     {
     	printf("%d\n",a[i]);
	 }
}
