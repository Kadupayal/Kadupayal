#include<stdio.h>
union stud
{
	int id;
	char name[20];
}s1;
int main()
{
	printf("enter student id\n");
	scanf("%d",&s1.id);
	
	printf("enter student name\n");
	scanf("%s",s1.name);
	
	printf("student id=%d\n",s1.id);
	printf("student name=%s",s1.name);
}
