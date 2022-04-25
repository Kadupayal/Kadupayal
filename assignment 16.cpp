#include<stdio.h>
#include<conio.h>
int main()
{
	int amt,total;
	printf("enter the amount");
	scanf("%d",&amt);
	total=amt/100;
	printf("%d note of 100\n",total);
	amt=amt-(total*100);
	total=amt/50;
	printf("%d note of 50\n",total);
	amt=amt-(total*50);
	total=amt/20;
	printf("%d note of 20\n",total);
	amt=amt-(total*20);
	total=amt/10;
	printf("%d note of 10\n",total);
	amt=amt-(total*10);
	total=amt/5;
	printf("%d note of 5\n",total);
	amt=amt-(total*5);		
	total=amt/2;
	printf("%d note of 2\n",total);
	amt=amt-(total*2);
	total=amt/1;
	printf("%d note of 1\n",total);
	amt=amt-(total*1);
}
