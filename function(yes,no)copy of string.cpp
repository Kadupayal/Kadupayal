#include<stdio.h>
#include<conio.h>
#include<string.h>
void fun(char,char);
main()
{
	char n1,n2;
	printf("enter two name");
	scanf("%c%c",&n1,&n2);
	fun(n1,n2);
}
void fun(char,char)
{
	
	char name1[15]={"revati"};
	char name2[15]={"payal"};
	strcpy(name1,name2);
	printf("%s",name1);
}

