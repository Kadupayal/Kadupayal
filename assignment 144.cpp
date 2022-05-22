#include<stdio.h>
#include<conio.h>
int main()
{
	int x,y,z;
	float a,b;
	
	printf("enter the value of x,y and z\n");
	scanf("%d %d %d",&x,&y,&z);
	
	a=(x+y)*z;
	b=x*y + y*z;
	
	printf("value of a = %f\n",a);
	printf("value of b =%f\n",b);
}
