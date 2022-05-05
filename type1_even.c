#include<stdio.h>
#include<conio.h>
void main()
{
	even();
}
void even()
{
	int i=0;
	do
	{
		i++;
		if(i%2==0)
		{
			printf("%d \n",i);
		}
	}
	while(i<=10);
}
