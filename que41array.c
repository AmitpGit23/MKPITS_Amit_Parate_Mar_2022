#include<stdio.h>
#include<conio.h>
int main()
{
	float i,sum=0;
	for(i=1;i<=50;i++)
	{
		sum=sum+(1/i);
	}
	printf("sum of no: %.2f",sum);
}
