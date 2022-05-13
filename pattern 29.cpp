
//   1
//  3 3
// 5 5 5
//7 7 7 7
#include<stdio.h>
#include<conio.h>
int main()
{
	int r,a,sp;
	for(r=1;r<=4;r++)
	{
		for(sp=1;sp<=41-r;sp++)
		{
			printf(" ");
		}
		for(a=1;a<=r;a++)
		{
		    if(r==1)
            printf(" %d",r);
            if(r==2)
            printf(" %d",r+1);
            if(r==3)
            printf(" %d",r+2) ;
            if(r==4)
            printf(" %d",r+3);
        }
        printf("\n");
    }
}
