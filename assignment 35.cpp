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
	for(i=n1;i<=n2;i++)
	{
		if((i%17)!=0)
		{
		 sum+=i;
        }
	}
	printf("sum=%d\n",sum);
}
