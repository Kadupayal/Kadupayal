#include<stdio.h>
#include<conio.h>
int main()
{
int a,c=0,min,max,s=0,maxx,minn;
float avg;
printf("enter the postive integer\n");
scanf("%d",&a);
if(a<=0)
{
printf("enter postive number\n");
}
while(a>0)
{
maxx=a;
minn=a;
s=s+a;
c++;
max=maxx>a;
min=minn<a;

printf("input next integer :\n");
scanf("%d",&a);
}
avg=s/c;
printf("number of postive number :%d\n",c);
printf("maximum value entered :%d \n",max);
printf("minimum value entered :%d \n",min);
printf("average value of number :%f\n",avg);

getch();
}
