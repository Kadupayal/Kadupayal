#include<stdio.h>
#include<conio.h>
int main()
{
	int x,y,i,j,l;
	printf("enter number of lines");
	scanf("%d",&x);
	printf("number of number in a line");
	scanf("%d",&y);
	for(i=1,l=1;i<=x;i++)
	{
		for(j=1;j<=y;j++)
		{
			printf("%d",l);
			l++;
		}
		printf("\n");
	}
	getch();
}
