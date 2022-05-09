
#include<stdio.h>
#include<conio.h>

void fun(int i);
int main()
{
printf("odd numbers \n");
fun(1);

}
void fun(int i)
{

if(i==21 )
return;
if(i%2!=0)
printf("%d\n",i);

fun(i+1);
getch();
}
