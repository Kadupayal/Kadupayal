#include<stdio.h>
#include<conio.h>

int main()
{
  int a[10],i,pos,v,n;
  printf("enter the number of array n= ");
  scanf("%d",&n);
  
  printf("enter the array\n");
  for(i=0;i<=n;i++)
  {
  	
  printf("a[%d]=",i);
  scanf("%d",&a[i]);
  
  }
  printf("enter the number you want to insert v= \n");
  scanf("%d",&v);

  pos=n+1;
   a[pos]=v;
   
  for(i=0;i<=n+1;i++)
  {
  printf("a[%d]=%d\n",i,a[i]);
  }
  getch();
  }
