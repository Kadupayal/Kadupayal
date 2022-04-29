#include<stdio.h>
#include<conio.h>           
int main()
{
    double n1, n2 ,n3 ,n4;
    double max, min;
	printf("enter a four numbers \n");
	scanf("%lf%lf%lf%lf", & n1 , & n2 , & n3 , & n4);
	
    if(n1>=n2 && n1>=n3 && n1>=n4)
    {
	  
     max=n4;
    }
	else
	 if(n2>=n1 && n2>=n3 && n2>=n4)
	{
	
     max=n2;
    }
	else
	 if(n3>=n1 && n3>=n2 && n3>=n4) 
	{
	  
	 max=n3;
    }
    else
    {
	
    max=n4;
    }
    
	 if(n1<=n2 && n1<=n3 && n1<=n4)
	{
	  
	 min=n1;
    }
	else
	 if(n2<=n1 && n2<=n3 && n2<=n4)
	{
	
	 min=n2;
    }
	else
	if(n3<=n1 && n3<=n2 && n3<=n4)
	{
	
	 min=n3;
    }
	else
	{
	
	min=n4;
    }
	printf("\ndifference is =%0.4lf\n",max,min);
	
}
