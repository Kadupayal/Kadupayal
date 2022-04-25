#include<stdio.h>
#include<conio.h>
int main()
{
	int days,y,m,d;
	printf("enter days");
	scanf("%d",&days);
	 
	y=(days/365);
	m=days/30;
	d=days-(m*30);
	printf("y m d=%d %d %d",y,m,d);
	
}
