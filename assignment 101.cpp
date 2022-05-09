#include<stdio.h>
#include<conio.h>

int main()
{
int a[2];
int i;
printf("enter the array number\n");
for(i=0;i<3;i++)
{
printf("a[%d]=",i);
scanf("%d",&a[i]);
}

if(a[0]==a[3-1])
{
printf("true");
}
else
{
printf("false");
}

getch();
}
