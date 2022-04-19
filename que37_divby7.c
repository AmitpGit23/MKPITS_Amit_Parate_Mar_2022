#include<stdio.h>
#include<conio.h>
int main()
{
	int n,m,t,i,sum=0;
	printf("Enter first No : ");
	scanf("%d",&n);
	printf("Enter 2nd No :  ");
	scanf("%d",&m);
	if(n >m)
	{
		t=m;
		m=n;
		n=t;
	}
	i=n+1;
    while(i<m)
	{
        if((i%7)==2 && (i%7)==3)
		{
	    	printf("no %d \n",i);		
		}
	    i++;
   }
	
}
