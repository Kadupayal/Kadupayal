
  #include<stdio.h>
  #include<conio.h>
  int main()
  {
  int a[4],i;
  printf("enter five number");
  for(i=0;i<=4;i++)
  {
  printf("a[%d] =",i);
  scanf("%d",&a[i]);

  if(a[i]%4==0)
  {
  printf("array divisible by 4\n");
  }
  }

  getch();
  }
