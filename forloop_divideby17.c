#include<stdio.h>
#include<conio.h>
int main()
{
	int n1,n2,t,i,sum=0;
	printf("Enter 1st integer :");
	scanf("%d",&n1);
	printf("Enter 2nd integer :");
	scanf("%d",&n2);
	if(n1>n2)
	{
		t=n2;
		n2=n1;
		n1=t;
	}
	i=n1;
	for(i=n1;i<=n2;i++)
	{
		if((i%17)!=0)
		{
			sum=sum+i;
		}
	}
	printf("sum : %d",sum);
	
}
