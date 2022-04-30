#include<stdio.h>
int main()
{
	char* letters= "abcdefghijklmnopqestuvwxyz ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int n;
	printf("list of integer equivalent of letters (a-z, A-Z)\n");
	printf("================================================\n");
	for(n=0; n<53; n++)
	{
		printf("%d\t",letters[n]);
		if((n+1)%6==0)
		{
			printf("\n");
		}
	}
}
