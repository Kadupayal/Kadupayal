#include<stdio.h>
#include<conio.h>
int main()
{
	int a, b;
	printf("enter the integer from keyboard ");
	scanf("%d",&a);
	printf("integer value=%d ",a);
	a<<=2;
	b=a;
	printf("the left shifted data is = %d\n ",b);
}
