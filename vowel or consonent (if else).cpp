#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	printf("enter any character");
	scanf("%c",&ch);
	
	if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
	{
		printf("is a vowel = %c\n",ch);
	}
	else
	{
		printf("is a consonant=%c\n");
	}
}
