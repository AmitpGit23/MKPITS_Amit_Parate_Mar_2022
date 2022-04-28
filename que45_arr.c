#include<stdio.h>
#include<conio.h>
int main()
{
	int ar[7],i,n;
	printf("Enter element of array : \n ");
	scanf("%d",&n);
	for(i=0;i<=7;i++)
	{
		ar[i]=n;
		n=3*n;
	}
	for(i=0;i<=7;i++)
	{
    	printf("n[%d]= %d \n",i,ar[i]);
    }
}
