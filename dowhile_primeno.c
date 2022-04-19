#include<stdio.h>
#include<conio.h>
int main()
{
	//wap  enter any number from key check it prime or not
	int n,i,m=0;
	printf("Enter any No :");
	scanf("%d",&n);
	i=1;
	do
	{
		if(n%i==0)
		{
			m++;
		}
		i++;
	}
	while(i<=n);
	if(m==2)
	{
		printf("this is prime no");
	}
	else
	{
		printf("number not a prime no");
	}
}
