#include<stdio.h>
int fun1();
int check(int x, int  y, int z);
int main()
{
	
	fun1();
}
int fun1()
{
	printf("%d",check(11, 20, 12));
	printf("\n%d",check(30, 30, 70));
	printf("\n%d",check(15, 12, 8));

	
}
int check(int x, int  y, int z)
{
	return(x>=20 && x<=50) || (y>=20 && y<=50) || (z>=20 && z<=50);
}
