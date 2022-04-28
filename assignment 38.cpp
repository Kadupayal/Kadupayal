#include<stdio.h>
#include<conio.h>
int main()
{
	int l,i;
	printf("enter number of lines ");
	scanf("%d", &l);
	
	while(i<=l)
	{
		printf("number:%d  square:%d  cube:%d\n",i,i*i,i*i*i);
	i++;
	}

}
