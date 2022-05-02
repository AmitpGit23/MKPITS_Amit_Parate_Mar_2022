#include<stdio.h>
#include<conio.h>
void main()
{
	int i,a[5],n,t=0;
	printf("Enter any Five Number :\n");

	for(i=0;i<5;i++)
	{
		printf("Enter number :");
		scanf("%d",&a[i]);

	}
	for(i=0;i<5;i++)
	{
		 n=a[i];

		if(a[i]==n && a[i+1]==n && a[i+2]==n)
		{
			printf("Triple");
			t=1;
		}
	}
	if(t==0)
	{
		printf("Not Triple");
	}



} 
