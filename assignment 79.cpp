#include<stdio.h>
int fun1();
int check(int n);
int main()
{
	fun1();
}
int fun1()
{
	printf("%d",check(3));
	printf("\n%d",check(14));
	printf("\n%d",check(12));
	printf("\n%d",check(37));
}
int check(int n)
{
	return n %3==0 || n%7==0;
}
