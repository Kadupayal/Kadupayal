#include<stdio.h>
#include<conio.h>
int main()
{                                            //factorial 5= 5*4*3*2*1
	int num,i,fact=1;                          //          =20*3*2*1
	printf("enter number");                     //         =60*2*1
	scanf("%d",&num);                           //         =120*1
	i=num;                                      //         =120
	while(i>=1)
	{
		fact=fact*i;
		i--;
    }
	printf("fact=%d",fact);
	
}
