#include<stdio.h>
#include<conio.h>

int main()
{
  int a[100],i,n,s=0;
  printf("enter the number of array \n");
  scanf("%d",&n);
  printf("enter the array\n");
  for(i=0;i<n;i++)
  {
  printf("a[%d]=\n",i);
  scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
   if(a[i]==5)
   {
     s=s+1;
     break;
     }
   else
   {
   s=s+1;
   }

  }
  printf("new array\n");
  for(i=s;i<n;i++)
  {
  printf("a[%d]=%d\n",i,a[i]);
  }
  getch();
  }

