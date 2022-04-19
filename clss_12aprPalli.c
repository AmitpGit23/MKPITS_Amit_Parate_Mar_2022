#include<stdio.h>
#include<conio.h>
int main ()
{
	int n,p,add=0;
	printf("Enter any No :");
	scanf("%d",&n);
	
	int t=n;
	while(n>0)
	{
		p=n%10;
		add=(add*10)+p;
		n=n/10;		
	}
	if(t==add)
	{
		printf("Palindrome No ");
	}
	else
	{
		printf("Not a Palindrone No ");
	}
	
}
