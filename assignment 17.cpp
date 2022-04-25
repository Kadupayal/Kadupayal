#include<stdio.h>
#include<conio.h>
int main()
{
	int sec,h,m,s;
	printf("enter seconds");
	scanf("%d",&sec);
	
	h=(sec/3600);
	m=(sec-(3600*h))/60;
	s=(sec-(3600*h)-(m*60));
	printf("h m s=%d %d %d",h,m,s);
	
}
