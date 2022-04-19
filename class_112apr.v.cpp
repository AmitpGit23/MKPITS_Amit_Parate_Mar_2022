#include<stdio.h>
#include<conio.h>
int main()
{
	// Wap to enter n digit number and 
	//perform addition of all digit reverse operation 
	//armstrong number or not 
	//palindrone or not
	int n,n1,add=0;
	printf("Enter any no : ");
	scanf("%d",&n);
	
	while(n>0)
	{
		n1=n%10;
		printf("%d \n",n1);
		n=n/10;
		add=add+n1;
	}
	printf("sum of all digit : %d",add);
	
}
