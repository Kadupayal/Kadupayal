#include<stdio.h>
#include<conio.h>
void add(int,int);   //declaration
main()
{
	int a, b;
	printf("enter two number\n");
	scanf("%d%d",&a,&b);
	add(a,b);    //function call
}
void add(int x, int y)
{
	int r;
	r=x+y;
	printf("add= %d",r);
}
