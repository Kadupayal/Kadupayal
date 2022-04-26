#include<stdio.h>
#include<conio.h>
int main()
{
	int moy;
	printf("enter a number between 1 to 12 to get the month name\n");
	scanf("%d",&moy);
	switch(moy)
	{
		    case1:
			printf("january\n");
			break;
			case2:
			printf("february\n");
			break;
			case3:
			printf("march\n");
			break;
			case4:
			printf("april\n");
			break;
			case5:
			printf("may\n");
			break;
			case6:
			printf("june\n");
			break;
			case7:
			printf("july\n");
			break;
			case8:
			printf("august\n");
			break;
			case9:
			printf("september\n");
			break;
			case10:
			printf("october\n");
			break;
			case11:
			printf("november\n");
			break;
			case12:
			printf("december\n");
			break;
			default:
				printf("enter a number between 1 to 12");
		
    }
    getch();
    
}



