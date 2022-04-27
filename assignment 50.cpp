#include<stdio.h>
#include<conio.h>            //  1 cm=0.393700 inch          1 inch =2.540000 cm
int main()
{
	double inch,cm , inch_to_cm;
	printf("enter a distance in cm\n");
	scanf("%1f",&cm);
	inch = cm / inch_to_cm;
	printf("distance of %0.21f cm is = %0.21f inches\n",cm,inch);
	getch();
}
