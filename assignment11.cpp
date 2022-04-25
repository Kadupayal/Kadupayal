#include<stdio.h>
#include<conio.h>
int main()
{
	float iw1, iw2, nop1, nop2,average;
	printf("weight of item one");
	scanf("%f",&iw1);
	printf("weight of item two");
	scanf("%f",&iw2);
	printf("number of item1 purchases\n");
	scanf("%f",&nop1);
	printf("number of item2 purchases\n");
	scanf("%f",&nop2);
	average=((iw1*nop1)+(iw2*nop2)) / (nop1+nop2);
	printf("average value = %f",average);
	getch();
}
