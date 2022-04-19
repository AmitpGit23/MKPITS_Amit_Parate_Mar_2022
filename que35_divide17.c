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
	while(i<=n2)
	{
		if((i%17)!=0)
		{
			sum=sum+i;
		}
		i++;
	}
	printf("sum : %d",sum);
	
}
