//enter n digit number and check palindrome or not
#include<stdio.h>
#include<conio.h>
int main()
{
	int num, n1, rev, backup;
	printf("enter a number\n");
	scanf("%d",&num);
	backup=num;
	
	while(n1>0)
	{
		n1=num%10;
		rev=rev*10+n1;
		num/10;
		
	}
	if(backup==rev)
	
	{
		printf("palindrome number");
		
	}
	else
	{
		printf("number is not palindrome");
	}
	getch();
  }  
