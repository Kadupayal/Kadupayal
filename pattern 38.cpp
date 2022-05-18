/*  D  D  D  D  D  D  D
       C  C  C  C  C
          B  B  B
             A
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
			printf("%c",r+64);
		}
		printf("\n");
	}
}
