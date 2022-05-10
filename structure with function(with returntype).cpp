#include<stdio.h>
struct student
{
	int id;
	char name[20];
};
struct student dis( )
{
	struct student s;
	printf("enter student id\n");
	scanf("%d",&s.id);
	printf("enter student name\n");
	scanf("%s",&s.name);
	
	return s;
}
int main()
{
	struct student s1;
	s1=dis();
	
	printf("student id=%d\n",s1.id);
	printf("student id=%s\n",s1.name);
}

