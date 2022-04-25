#include<stdio.h>
#include<conio.h>
int main()
{
	int a;
	float b;
	printf("enter total distance in km");
	scanf("%d",&a);
	printf("enter total fuel spent in liters");
	scanf("%f",&b);
	printf("average consumption (km/lt) %3f",a/b);
	printf("\n");
}
