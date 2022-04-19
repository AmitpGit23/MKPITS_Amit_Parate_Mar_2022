#include<stdio.h>
#include<conio.h>
int main()
{
	//wap  enter any number from key check it prime or not
	int n,i,m=0;
	printf("Enter any No :");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		if(n%i==0)
		{
			m++;
		}
		i++;
	}
	if(m==2)
	{
		printf("this is prime no");
	}
	else
	{
		printf("number not a prime no");
	}
}
