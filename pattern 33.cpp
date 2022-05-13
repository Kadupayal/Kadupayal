/*        A
         B B
        C C C
      D  D D D
*/      
#include<stdio.h>
#include<conio.h>

int main()
{
int i,sp,j;
for(i=1;i<=4;i++)
{
for(sp=1;sp<=40-i;sp++)
{
 printf(" ");
 }
 for(j=1;j<=i;j++)
 {
 printf(" %c",i+64);
 }
 printf("\n");
 }
}
