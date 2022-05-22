#include<stdio.h>
int main()
{
	int m,n;
	printf("enter a number:");
	scanf("%d",&m);
	if(m!=0)
	{
			if(m>0)
			{
			  n=1;
			  printf("the value of n:%d\n",n);
		    }
		    else
		    if(m<0)
		    {
		    	n=-1;
		    	printf("the value of n:%d\n",n);
			}
			else
			if(m==0)
			{
			   n=0;
			   printf("the value of n:%d\n",n);
		    }
		    printf("the value of m=%d",m);
	}
}
