#include<stdio.h>
#include<conio.h>
int main()
{
int i;
int a[5];

printf("enter six number \n");
for(i=0;i<=5;i++)
{
printf("a[%d]= ",i);
scanf("%d",&a[i]);
}
for(i=0;i<=5;i++)
{
if(a[i]== a[i+1]&& a[i+2]==a[i])
{
printf("in the sequence triple are present\n");
}
}
getch();
}

