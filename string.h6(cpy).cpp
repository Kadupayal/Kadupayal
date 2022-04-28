#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char name1[20]={"payal"};
	char name2[20]={"raj"};
	int cpy;
	
    strcpy(name1,name2);
	printf("%s",name1);
	getch();
}
