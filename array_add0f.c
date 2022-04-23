#include<stdio.h>
#include<conio.h>
int main()
{
	int ar[4],i,add=0;
    printf("Enter 5 number :");
    for(i=0;i<5;i++)
    {
    	scanf("%d",&ar[i]); 	
	}
	for(i=0;i<5;i++)
	{
		add=add+ar[i] ;	
    }
    	printf("sum of array: %d",add);
}
