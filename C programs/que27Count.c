#include<stdio.h>
#include<conio.h>
int main()
{
	int n1,n2,n3,n4,n5;
	int pcount=0,ncount=0;
	printf("input the first number : " );
	scanf("%d",&n1);
	printf("input the second number : " );
	scanf("%d",&n2);
	printf("input the third number : " );
	scanf("%d",&n3);
	printf("input the forth number : " );
	scanf("%d",&n4);
	printf("input the five number : " );
	scanf("%d",&n5);
	
	if(n1%2==0)
	{
		pcount=pcount+1;
	}
	else
	{
		ncount=ncount+1;
	}
	if(n2%2==0)
	{
		pcount=pcount+1;
	}
	else
	{
		ncount=ncount+1;
	}
	if(n3%2==0)
	{
		pcount=pcount+1;
	}
	else
	{
		ncount=ncount+1;
	}
	if(n4%2==0)
	{
		pcount=pcount+1;
	}
	else
	{
		ncount=ncount+1;
	}
	if(n5%2==0)
	{
		pcount=pcount+1;
	}
	else
	{
		ncount=ncount+1;
	}

	printf("No of postive counts : %d",pcount);
	printf("No of negative Counts :%d",ncount);
	
}
