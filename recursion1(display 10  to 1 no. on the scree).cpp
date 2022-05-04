#include<stdio.h>
int i=10;
void fun();
int main()
{
	fun();
}
void fun()
{
    if(i==0)
    return;
	printf("%d",i);
	i--;
	fun();
}

