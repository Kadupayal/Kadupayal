
#include<stdio.h>
#include<conio.h>
#include<string.h>
void fun()
{
	char name1[15]={"payal"};
	char name2[15]={"revati"};
	strcpy(name1,name2);
	printf("%s",name1);

}
int main()
{
	fun();
}

