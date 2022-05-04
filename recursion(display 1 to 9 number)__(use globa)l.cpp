#include<stdio.h>
#include<conio.h>
int i=1;
void fun();
int main()
{
	fun();
}
void fun()
{
    if(i==10)
    return;
	printf("%d",i);
	i++;
	fun();
}
