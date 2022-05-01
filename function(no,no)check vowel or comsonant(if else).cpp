#include<stdio.h>
#include<conio.h>
void check();
int main()
{
	 check();
}
void check()
{
	char ch;
	printf("enter any charecter");
	scanf("%c",&ch);
	if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='u')
	{
		printf(" is a vowel=%c\n",ch);
	}
	else
	{
		printf("is a consonant=%c\n",ch);
	}
}
