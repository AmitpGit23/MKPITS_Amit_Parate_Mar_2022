#include<stdio.h>
#include<conio.h>
int main()
{
	int n,diff;
	printf("Enter n value : ");
	scanf("%d",&n);
	
	if(n>51)
	{
		diff=(n-51)*3;
		printf("Difference is : %d",diff);
	}
	else
	{
		printf("no is not greater");
	}
}
