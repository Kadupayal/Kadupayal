#include<stdio.h>
int main()
{
	int x,num[4],avg=0,sum=0;
	for(x=0;x<4;x++)
	{
		printf("enter number %d\n",(x+1));
		scanf("%d",&num[x]);
	}
	for(x=0;x<4;x++)
	{
		sum=sum+num[x];
	}
	avg=sum/4;
	printf("average of entered number is:%d\n",avg);
}
