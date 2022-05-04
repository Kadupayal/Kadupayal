#include<stdio.h>
void fun(int a,int b);
int main()
{
	int a=2, b=3;
	printf("a=%d b=%d/n",a,b);
	fun(a,b);
	printf("a=%d b=%d",a,b);
	
}
void fun(int x,int y)
{
	x=12;
	y=13;
}
