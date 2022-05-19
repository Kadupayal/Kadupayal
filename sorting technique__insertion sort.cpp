#include<stdio.h>
#include<conio.h>
int main()
{
int i,j,size,temp,a[7];
printf("enter array size: ");
scanf("%d",&size);
printf("enter array element\n");
for(i=0;i<size;i++)
{
	scanf("%d",&a[i]);
}
for(i=1;i<size;i++)
{
	temp=a[i];
	j=i-1;
	while(i>=0&&a[j]>temp)
	{
		a[j+1]=a[j];
		j--;
	}
	a[j+1]=temp;
}
printf("after sorting\n");
for(i=0;i<size;i++)
{
	printf("%d\n",a[i]);
}
}
