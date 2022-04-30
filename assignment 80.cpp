#include<stdio.h>
#include<conio.h>
int fun1();
int check(int temp1, int  temp2);
int main()
{
	
	fun1();
}
int fun1()
{
	printf("%d",check(120, -1));
	printf("\n%d",check(-1, 120));
	printf("\n%d",check(2, 120));

	
}
int check(int temp1, int  temp2)
{
    return temp1 < 0 && temp2 > 100 || temp2< 0 && temp1 > 100;
	
    
}

