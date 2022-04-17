#include<stdio.h>
#include<conio.h>
void main()
{
int y,w,d,days;

printf("days :\n");
scanf("%d",&days);
y=days/365;
w=days/7;
d=days;
printf("days into year week and days form \n");
printf( "%d :%d: %d\n",y,w,d);
getch();
}
