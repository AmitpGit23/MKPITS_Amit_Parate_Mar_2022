#include<stdio.h>
#include<conio.h>
int main()
{
	int ar[7],i,n;
	printf("Input array : \n ");
	for(i=0;i<7;i++)
	{
		scanf("%d",&n);
		if(n>0)
		{
			ar[i]=n;
		}
		else
		{
			ar[i]=100;
		}
	}
	printf("Array value are : \n");
	for(i=0;i<7;i++)
	{
		printf("ar[%d] = %d\n",i,ar[i]);
	}
}
