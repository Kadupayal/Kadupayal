#include<stdio.h>
#include<conio.h>
int fun();
int check(int x,int y,int z);
int main()
{
	fun();
}
int fun()
{
	printf("%d",check(10,22,15));
	
	printf("\n%d",check(11,21,31));
	
	printf("\n%d",check(11,20,31));
}
int check(int x,int y,int z)

{
	return((x -y) >=20 || (y - z) >=20 || (z - x) >=20);
}
