#include<stdio.h>
#include<conio.h>

int main()
{
int a[2];
int i;
printf("enter the array number\n");
for(i=0;i<2;i++)
{
printf("a[%d]=",i);
scanf("%d",&a[i]);
}

  for(i=0;i<2;i++)
  {
    if(a[i]==15 || a[i]==20)
    printf("given array contain 15 or 20");
    }

getch();
}
