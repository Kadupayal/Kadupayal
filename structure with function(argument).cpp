#include<stdio.h>
struct student 
{
	int id;
	char name[30];
	
}s;
int fun(struct student s1)
{

	printf("student id=%d\n",s1.id);
	printf("student name=%s\n",s1.name);
}
int main()
{
	printf("enter student id\n");
	scanf("%d",&s.id);
	printf("enter student name\n");
	scanf("%s",&s.name);
	fun(s);
}


