/*           1
           3 2 1
         5 4 3 2 1
      7  6 5 4 3 2 1
*/      
#include<stdio.h>
#include<conio.h>

int main()
{
int i,sp,j;
clrscr();
for(i=1;i<=4;i++)
{
for(sp=1;sp<=40-i;sp++)
{
 printf(" ");
 }
 for(j=i*2-1;j>=1;j--)
 {
 printf("%d",j);
 }
 printf("\n");
 }
}
