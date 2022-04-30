#include<stdio.h>
int fun1();
int check(int x, int  y);
int main()
{
	
	fun1();
}
int fun1()
{
	printf("%d",check(100, 199));
	printf("\n%d",check(250, 300));
	printf("\n%d",check(105, 190));

	
}
int check(int x, int  y)
{
    return (x >= 100 && x <= 200) || (y>= 100 && y <= 100);
	 
}
