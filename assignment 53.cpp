#include<stdio.h>
#include<conio.h>           
int main()
{
    int num , n1, rev=0,backup;
	printf("enter a number\n");
	scanf("%d",&num);
	backup=num;
	while(num>0)
	{
		n1=num%10;
		rev= rev*10+n1;
		num= num/10;	
	}
	printf("reverse=%d\n",rev);
	
}
