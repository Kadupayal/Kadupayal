//distance formulae=[(x2-x2)^2+(y2-y1)^2]^2
#include<stdio.h>
#include<conio.h>
int main()
{
	int x1,y1,x2,y2,distance;
	printf("enter x1");
	scanf("%d",&x1);
	printf("enter y1");
	scanf("%d",&y1);
	printf("enter x2");
	scanf("%d",&x2);
	printf("enter y2");
	scanf("%d",&y2);
	distance=((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	printf("distance between thw two points=%d",(distance));
	printf("\n");
	getch();
}
