#include<stdio.h>
#include<conio.h>
int main()
{
	int principal,rate,days,si;

	printf("enter principal amount,rate of interest and time in days");
	scanf("%d%d%d",&principal,&rate,&days);
	si=(principal*rate*days)/(365*100);
	printf("simple interest is %d",	si);
}

	


