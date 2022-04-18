#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	printf("enter an alphabet");
	scanf("%c",&ch);
	if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')	
	{
		printf(" is a  vowel=%c\n",ch);
		
	}
	else
	{
		printf("is a consonant=%c\n",ch);
	}
}