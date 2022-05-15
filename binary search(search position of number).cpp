#include<stdio.h>
#include<conio.h>

int main()
{
int a[100],n,s,i;
printf("enter the number of array : ");
scanf("%d",&n);
printf("%d",n);

printf("enter the array\n");
for(i=0;i<=n;i++)
{
printf("a[%d]= ",i);
scanf("%d",&a[i]);
}
printf("enter the number want to search  \n");
scanf("%d",&s);
for(i=0;i<=n;i++)
{
int first=0,last=n;
int mid=(first+last)/2;

if(a[mid]==s)
{
printf("number %d found at=%d",s,mid);
break;
}
if(a[mid]<s)
{
first=mid+1;
printf("number %d found at %d",s,first);
break;
}
if(a[mid]>s)
{
last=mid-1;
printf("number %d found at %d",s,last);
break;
}
}
getch();
}

