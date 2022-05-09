#include<stdio.h>
#include<conio.h>

int main()
{
int a[2];
int b[2],i;
printf("enter the array number\n");
for(i=0;i<3;i++)
{
printf("a[%d]=",i);
scanf("%d",&a[i]);
}
for(i=0;i<3;i++)
{
printf("b[%d]=",i);
scanf("%d",&b[i]);
}

if(a[0]==b[0] || a[2]==b[2])
{
printf("true");
}
else
{
printf("false");
}

getch();
}
