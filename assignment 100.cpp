#include<stdio.h>
#include<conio.h>
int main()
{
	int n1, n2,n3;
	printf("enter three number\n");
	scanf("%d%d%d",&n1,&n2,&n3);
    
    if(n2-n1==n3-n2 || n3-n2==n1-n3 || n1-n3==n2-n1 || n3-n1==n2-n3 || n1-n2==n3-n1 || n2-n3==n1-n2)
    {
    	printf("true");
	}
	else
	{
		printf("false");
	}

}
