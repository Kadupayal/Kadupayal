#include<stdio.h>
int main()
{
	int i,j,x=5;

	for(i=0;i<5;i++)
	{
	    for(j=0;j<3;j++)
		{
			if(i==0 || i==4)
			{
				printf("%d",x);
			}
			else
			if(j==0 || j==2)
			{
				if(j==2)
				{
					printf(" ");
				}
				printf("%d",x);
			}
			}
			printf("\n");
		}
	}
	
	

