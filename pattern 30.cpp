
//   A
//  C C
// E E E
//G G G G

#include<stdio.h>
#include<conio.h>

int main()
{
  int r,sp,a,add=65;
  for(r=1;r<=4;r++)
  {
     for(sp=1;sp<=40-r;sp++)
     {
        printf(" ");
     }
    for(a=1;a<=r;a++)
     {
        printf(" %c",add);

     }
     add=add+2;
     printf("\n");
  }
}
