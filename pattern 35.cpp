  /*              1
            1   2   1
          1   2  3  2  1
        1  2  3  4  3  2  1
*/ 

#include<stdio.h>
#include<conio.h>
int main()
{
	int r,c,i,j;
	for(r=1;r<=4;r++)
	{
		for(c=1;c<=4-r;c++)
		{
			printf(" ");
		}
		for(i=1;i<=r;i++)
		{
			printf("%d",i);
		}
		for(j=r-1;j>=1;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}       
