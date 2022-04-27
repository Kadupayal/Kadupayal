#include<stdio.h>
#include<conio.h>
int main()
{
	int p,r,t,amt;
	printf("enter principle ,rate of intrest and time to compute the simple interst\n");
	scanf("%d%d%d",&p,&r,&t);
	amt=(p*r*t)/100;
	printf("simple interest=%d",amt);
}
