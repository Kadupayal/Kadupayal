#include<stdio.h>
#include<conio.h>
int main()
{
	int x,numbers[5],total=0;
	printf("enter the first number\n");
	scanf("%d",&numbers[0]);
	printf("enter the second number\n");
	scanf("%d",&numbers[1]);
	printf("enter the third number\n");
	scanf("%d",&numbers[2]);
	printf("enter the forth number\n");
	scanf("%d",&numbers[3]);
	printf("enter the fifth number\n");
	scanf("%d",&numbers[4]);
	for(x=0;x<5;x++)
	{
	  if((numbers[x]%2) != 0)
	{
		total += numbers[x];
	}
    }
	printf("sum of all odd values=%d\n",total);
	printf("\n");
}


