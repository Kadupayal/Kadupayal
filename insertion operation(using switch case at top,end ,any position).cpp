#include<stdio.h>
#include<conio.h>

int main()
{
  int a[100],i,v,n,s;
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

  printf("enter 1 for insert number at top  \n");
  printf("enter 2 for insert number at end  \n");
  printf("enter 3 for insert at any position \n");

  scanf("%d",&s);


   switch (s)
   {
   case 1:
   {
    int pos=0;
    for(i=0;i<=n+1;i++)
    {
     a[i+1]=a[i];
     }
     a[pos]=0;
     for(i=0;i<=n+1;i++)
     {
      printf("a[%d]=%d\n",i,a[i]);
      }
      break;
   }
   case 2:
   {
    int pos=n+1;
    a[pos]=v;
    for(i=0;i<=n+1;i++)
    {
      printf("a[%d]=%d\n",i,a[i]);
      }
    break;
    }
    case 3:
    {
    int pos;
    printf("enter the position of number \n");
     scanf("%d",&pos);
     for(i=n+1;i>=pos;i--)
     {
      a[i+1]=a[i];
      }
      a[pos]=v;
      for(i=0;i<=n+1;i++)
      {
      printf("a[%d]=%d\n",i,a[i]);
      }
      break;
   }
   default :
   {
     printf("enter t proper number\n");
     break;
   }
   }
}
   
