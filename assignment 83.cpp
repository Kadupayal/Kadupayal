#include<stdio.h>
int fun1();
int check(int x, int  y);
int main()
{
	
	fun1();
}
int fun1()
{
	printf("%d",check(20, 84));
	printf("\n%d",check(14, 50));
	printf("\n%d",check(11, 45));

	
}
int check(int x, int  y)
{
	return(x<=50 || y>=50) || (x<=20 || y>=50);
}
