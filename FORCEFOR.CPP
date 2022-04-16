#include<stdio.h>
#include<conio.h>
void main()
{
int mass,accel,force;
printf("enter mass");
scanf("%d",&mass);
printf("enter accel");
scanf("%d",&accel);
force=mass*accel;
printf("\nforce=%d",force)
getch();
}