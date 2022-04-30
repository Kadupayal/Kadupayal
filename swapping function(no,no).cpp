#include<stdio.h>
int swap();
int main()
{
	swap();
}
int swap()
{
		int num1,num2,sw;
		printf("enter two number");
        scanf("%d%d",&num1,&num2);
        sw=num2;
        num2=num1;
        num1=sw;
        printf("after swapping\n");
        printf("num1=%d num2=%d",num1,num2);
}
	

