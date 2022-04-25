#include<stdio.h>
#include<conio.h>
int main()
{
	double n1,n2,n3;
	printf("enter three integers");
	scanf("%f %f %f",&n1,&n2,&n3);
	if(n1>=n2 && n1>=n3)
    {
    	printf("%2f is the maximum",n1);
	}
	else
	if(n2>=n1 && n2>=n3)
    {
    	printf("%2f is the maximum",n2);
	}
	else
    {
    	printf("%2f is the maximum",n3);
	}


}
