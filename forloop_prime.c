#include<stdio.h>
#include<conio.h>
int main()
{
	//wap  enter any number from key check it prime or not
	int n,i,m=0;
	printf("Enter any No :");
	scanf("%d",&n);
    for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			m++;
		}
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
