#include<stdio.h>
#include<conio.h>
int backup=001,num,n1,n2,n3,sum;
void fun();
int main()
{
	fun();
}
void fun()
{
	if(backup==1000)
	return;
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
	fun();
}
