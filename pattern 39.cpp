/*  4  4  4  4  4  4  4
      3  3  3  3  3
        2  2  2
           1
*/

#include<stdio.h>
#include<conio.h>
int main()
{
	int r,c,sp;
	for(r=4;r>=1;r--)
	{
		for(sp=41-r;sp>=1;sp--)
		{
			printf(" ");
		}
		for(c=r*2-1;c>=1;c--)
		{
			printf("%d",r);
		}
		printf("\n");
	}
}
