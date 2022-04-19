#include<stdio.h>
#include<conio.h>
int main()
{
	//armstrong No
	int i,n,r,add=0;
	printf("Enter any Integer : ");
	scanf("%d",&n);
	i=n;
	do
	{
		r=n%10;
		add=add+(r*r*r);
		n=n/10;
	}
	while(n>0);
	if(i==add)
	{
		printf("Armstrong number ");
	}
	else
	{
		printf("Number is not Armstrong ");
	}
	
}
