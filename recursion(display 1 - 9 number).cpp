#include<stdio.h>
#include<conio.h>
void fun(int a);
int main()
{
	fun(1);
}
void fun(int a)
{
	if(a==10)
	return;
	fun(a+1);
	printf("%d\n",a);
}
