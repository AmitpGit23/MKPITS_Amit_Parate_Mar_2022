#include<stdio.h>
#include<conio.h>
int main()
{
	int n1,n2,n3,n4,n5,total;
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
	
	if(n1>=0)
	{
		pcount=pcount+1;
		total+=n1;	
	}
	if(n2>=0)
	{
		pcount=pcount+1;
		total+=n2;
		
	}
	if(n3>=0)
	{
		pcount=pcount+1;
		total+=n3;
		
	}
	if(n4>=0)
	{
		pcount=pcount+1;
		total+=n4;
		
	}
	if(n5>=0)
	{
		pcount=pcount+1;
		total+=n5;
		
	}
	float avg=total/pcount;
	printf("The total possitive number is %d ",pcount);
	printf("\n the avrage of posstive number is %.2f",avg);
	
}

