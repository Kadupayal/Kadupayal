#include<stdio.h>
int fun1();
int check(int x, int  y);
int main()
{
	
	fun1();
}
int fun1()
{
	printf("%d",check(78, 95));
	printf("\n%d",check(25, 35));
	printf("\n%d",check(40, 50));
	printf("\n%d",check(55, 60));

}
int check(int x, int y)
{
	return ( x>=40 && x<= 50 && y>=40 && y<=50) || (x>=50 && x<=60 && y>=50 && y<=60);
}
