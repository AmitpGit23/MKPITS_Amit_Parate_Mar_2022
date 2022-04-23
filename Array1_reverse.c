#include<stdio.h>
#include<conio.h>
int main()
{
	int a[4],i;
	
	printf("Enter 5 numbers \n");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	printf(" reverse Array elements are : \n");
	for(i=4;i>=0;i--)
	{
			printf("%d \n",a[i]);
    }
}

