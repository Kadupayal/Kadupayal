/*            A
           A  B  A
        A  B  C  B  A
      A  B  C  D  C  B  A
*/

#include<stdio.h>
#include<conio.h>
int main()
{
	int r,sp,c;
	for(r=1;r<=4;r++)
	{
		for(sp=1;sp<=41-r;sp++)
		{
			printf(" ");
    	}
    	for(c=1;c<=r;c++)
    	{
    		printf("%c",c+64);
		}
		for(c=r-1;c>=1;c--)
		{
			printf("%c",c+64);
		}
		printf("\n");
	}
}
