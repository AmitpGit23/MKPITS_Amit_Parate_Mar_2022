#include<stdio.h>
#include<conio.h>
int main()
{
	int n,p,t,add=0;
	printf("Enter any no :");
	scanf("%d",&n);
	
	t=n;
	for(n>0)
	{
		p=n%10;
		add=(add*10)+p;
		n=n/10;
	}
	if(t==add)
	{
		printf("this is pallindrom no");
	}
	else
	{
		printf("This is not a pallindrom no");
	}
}
