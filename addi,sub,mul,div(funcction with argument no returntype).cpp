#include<stdio.h>
#include<conio.h>
int fun1();
int add(int x,int y);
int sub(int x,int y);
int mul(int x,int y);
int div(int x,int y);

int main()
{
	fun1();
}
int fun1()
{
	int a=2,b=3;
	add(a,b);
	sub(a,b);
	mul(a,b);
	div(a,b);
}
int add(int x,int y)
{
	int r;
	r=x+y;
	printf("add=%d\n",r);
	
}
int sub(int x,int y)
{
	int r;
	r=x-y;
	printf("sub=%d\n",r);
	
}
int mul(int x,int y)
{
	int r;
	r=x*y;
	printf("mul=%d\n",r);
	
}
int div(int x,int y)
{
	int r;
	r=x/y;
	printf("div=%d\n",r);
	
}
