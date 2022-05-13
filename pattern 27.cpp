/*           1
          1  2  3
       1   2   3  4  5
     1   2   3  4   5  6  7
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
		for(a=1;a<(r*2);a++)
		{
			printf(" %d",a);
		}
		printf("\n");
	}
}
	
	
	        
