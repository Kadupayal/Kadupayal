#include<stdio.h>
int fun1();
int check(int x, int  y);
int main()
{
	
	fun1();
}
int fun1()
{
	printf("%d",check(78, 95));
	printf("\n%d",check(20, 30));
	printf("\n%d",check(21, 25));
	printf("\n%d",check(28, 28));

}
int check(int x, int y)
{
	if(x>=20 && x<=30 && y>=20 && y<=30)
	{
		if(x>=y)
		{
			return x;
		}
		else
		{
			return y;
		}
		
	}
	else
	if(x>=20 && y<=30)
	{
		return x;
	}
	else
	if(y>=20 && y<=30)
	{
		return y;
	}
	else
	{
		return 0;
	}
}
