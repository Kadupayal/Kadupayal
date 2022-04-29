#include<stdio.h>
#include<conio.h>
int main()
{
	int x,y,i,pow=1;
	printf("enter x and y values");
	scanf("%d%d",&x,&y);
	
	i=1;
	while(i<=y)
	{
		pow=pow*x;
		i++;
	}
	printf("pow=%d",pow);
}
