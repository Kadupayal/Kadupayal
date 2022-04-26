#include<stdio.h>
#include<conio.h>
int main()
{
	float x,y,z,perimeter;
	printf("enter the first number\n");
	scanf("%f",&x);
	printf("enter the second number\n");
	scanf("%f",&y);
	printf("enter the third number\n");
	scanf("%f",&z);
    
    if(x<(y+z) && y<(x+z) && z<(y+x))
    {
    	perimeter=x+y+z;
    	printf("perimeter=%f\n",perimeter);
	}
	else
	{
		printf("not possible to creat a triangle ");
	}
}



