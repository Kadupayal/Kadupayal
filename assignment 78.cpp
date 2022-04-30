#include<stdio.h>
int fun1();
int check(int x);
int main()
{
	fun1();
}
int fun1()
{
	printf("%d",check(200));
	printf("\n%d",check(90));
	printf("\n%d",check(98));

	
}
int check(int x)
{
	if((x-100)<=10 || (x-200)<=10)
	return 1;
	return 0;

	
}
	
