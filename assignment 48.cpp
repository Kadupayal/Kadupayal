#include<stdio.h>
#include<conio.h>
int main()
{
	int i, e, sval,position;
	printf("enter the length of the array\n");
	scanf("%d",&e);
	int v[e];
	printf("enter the array elements\n");
	for(i=0;i<e;i++)
	{
		scanf("%d",&v[i]);
	}
	sval=v[0];
	position=0;
	for(i=0;i<e;i++)
	{
		if(sval>v[i])
		{
			sval=v[i];
			position=i;
		}
	}
	printf("smallest value = %d\n",sval);
	printf("position of the element=%d\n",position);
}
