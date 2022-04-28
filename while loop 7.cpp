#include<stdio.h>
#include<conio.h>
int main()
{
	int n1,n2,n3,num,sum,backup=001;
	printf("all armstrong number between 1 to 1000\n");
	
	while(backup<=1000)
	{
		num=backup;
		n1=num%10;
		num=num/10;
		n2=num%10;
		num=num/10;
		n3=num%10;
		
		sum=(n1*n1*n1)+(n2*n2*n2)+(n3*n3*n3);
		
		if(backup==sum)
		{
			printf("%d\n",sum);
		}
		backup++;
		
	}
}
