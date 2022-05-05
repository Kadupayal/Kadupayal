#include<stdio.h>
#include<conio.h>
int num,i,fact=1;
int fun();
int main()
{
	int s;
	printf("enter number");
	scanf("%d",&num);
	i=num;
	s=fun();
	printf("s=%d",s);
}
int fun()
{
	if(i==0)
	return fact;
	fact=fact*i;
	i--;
	fun();
}

