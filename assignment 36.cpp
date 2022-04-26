#include<stdio.h>
#include<conio.h>
int main()
{
	int n1,n2,i,sw,sum=0;
	printf("enter the first integer");
	scanf("%d",&n1);
	printf("enter the second integer");
	scanf("%d",&n2);
	if(n1>n2)
	{
		sw=n2;
		n2=n1;
		n1=sw;
	}
	for(i=n1+1;i<n2;i++)
	{
		if((i%7)==2 || (i%7)==3)
		{
		 printf("%d\n",i);
        }
	}
	
}
