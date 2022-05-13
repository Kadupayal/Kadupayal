/*           A
          A  B  C
        A  B  C  D  E
      A  B  C  D  E  F  G
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
			printf(" %c",'A'+(a-1));
		}
		printf("\n");
			
	}
}
