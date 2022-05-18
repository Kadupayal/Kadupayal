/*    *  *  *  *  *  *  *
          *  *  *  *  *
           *   *  *
            *  *
              *
*/

#include<stdio.h>
#include<conio.h>
int main()
{
	int r,str,sp;
	for(r=4;r>=1;r--)
	{
		for(sp=41-r;sp>=1;sp--)
		{
			printf(" ");
		}
		for(str=r*2-1;str>=1;str--)
		{
			printf("*");
		}
		printf("\n");
    }
}
