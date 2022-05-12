/*ABCDE
  ABCD
  ABC
  AB
  A
  */
  
#include<stdio.h>
int main()
{
	int r,c;
	for(r=1;r<=5;r++)
	{
		for(c=1;c<=5-r+1;c++)
		{
			printf("%c",64+c);
		}
		printf("\n");
	}
}  
