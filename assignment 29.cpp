#include<stdio.h>
#include<conio.h>
int main()
{
	int i,numbers[5],total=0;	
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
	for(i=0;i<5;i++)
	{
		if(numbers[i]%2!=0)
		{
			total +=numbers[i];
		}	
	}
	

	printf("sum of all odd values =%d",total);
	printf("\n");
	getch();
}

		
		
		
		
	

