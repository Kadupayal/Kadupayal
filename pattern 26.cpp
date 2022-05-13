/*          1
         2     2
       3    3    3
    4    4    4   4
    */

#include<stdio.h>
int main()
{
	int r,sp,a;
	for(r=1;r<=4;r++)
	{
		for(sp=1;sp<=41-r;sp++)
		{
			printf(" ");
	    }
	    for(a=1;a<=r;a++)
		{
			printf(" %d",r);
		}
		printf("\n");
			
	}
}
