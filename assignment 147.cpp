#include<stdio.h>
int main()
{
	int celsius;
	printf("enter the amount of celsius: \n");
	scanf("%d",&celsius);
	
	printf("kelvin=%d\n",celsius+273);
	printf("Fahrenheit=%d",celsius*18/10+32);
}
