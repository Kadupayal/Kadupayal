
#include<stdio.h>
#include<conio.h>
int rev();
int main()
{
int r;
 r=rev();
printf("reverse =%d",r);
getch();
}
int rev()
{
int res=0,i,b,m,a;
printf("enter the number ");
scanf("%d",&a);

while(a>=1)
{
b=a%10;
res=res*10+b;
a=a/10;
 printf("%d\n",res);
}
m=res;
return m;

}
