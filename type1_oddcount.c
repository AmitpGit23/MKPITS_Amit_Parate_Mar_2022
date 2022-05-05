#include<stdio.h>
#include<conio.h>
void main()
{
	odd();
}
void odd()
{
	int i=0;
	do
	{
		i++;
		if((i%2)!=0)
		{
			printf("%d \n",i);
		}
	}
	while(i<=50);
}
