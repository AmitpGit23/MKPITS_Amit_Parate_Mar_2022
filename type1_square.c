#include<stdio.h>
#include<conio.h>
void main()
{
	square();
}
void square()
{
	int n,i;
	printf("Input number of lines : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d %d %d \n",i,i*i,i*i*i);
	}
}
