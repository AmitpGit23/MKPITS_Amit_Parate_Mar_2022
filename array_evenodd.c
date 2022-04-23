#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10],i;
	int ecount=0,ocount=0;
	printf("Enter 10 numbers \n");
	for(i=0;i<=10;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]%2==0)
		{
			ecount=ecount+1;
		}
		else
		{
			ocount=ocount+1;
		}
	}
	printf("Even No : %d",ecount);
	printf("\nodd no : %d",ocount);
    
}

