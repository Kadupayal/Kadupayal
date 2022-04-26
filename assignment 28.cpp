#include<stdio.h>
#include<conio.h>
int main()
{
	float numbers[5],total=0,avg;
	int i,positive=0;
	printf("enter the first number\n");
	scanf("%f",&numbers[0]);
	printf("enter the second number\n");
	scanf("%f",&numbers[1]);
	printf("enter the third number\n");
	scanf("%f",&numbers[2]);
	printf("enter the forth number\n");
	scanf("%f",&numbers[3]);
	printf("enter the fifth number\n");
	scanf("%f",&numbers[4]);
	for(i=0;i<5;i++)
	{
		if(numbers[i]>0)
		{
			positive++;
		}	
	}
	avg=total/positive;
	printf("number of positive number=%d",positive);
	printf("average value of the said positive numbers =%f",avg);
	printf("\n");
	getch();
}
		
		
		
		
	

