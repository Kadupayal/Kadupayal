#include<stdio.h>
#include<conio.h>
int main()
{
	int l,i,j=1,x=0;
	printf("enter number of lines");
	scanf("%d",&l);
	for(i=1;i<=l;i++);
	{
		while(x<3)
		{
			printf("%d ",j++);
			x++;
		}
		x=0;
		printf("\n");
	}
	getch();
}
