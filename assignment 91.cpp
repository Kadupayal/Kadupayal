#include<stdio.h>
#include<conio.h>
int main()
{
	int n1,n2,sum;
	printf("enter two number\n");
	scanf("%d%d",&n1,&n2);
	sum=n1+n2;
	if(sum>=10&&sum<=20)
	{
		printf("30");
		
	}
	else
    {
	    printf("%d",sum);
    }
}

