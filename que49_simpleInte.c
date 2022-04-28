#include<stdio.h>
#include<conio.h>
int main()
{
	int SI,i,t,p;
	printf("Enter principal: ");
	scanf("%d",&p);
	printf("Enter rate of interest : ");
	scanf("%d",&i);
	printf("Enter Time period");
	scanf("%d",&t);
	SI=(p*i*t)/100;
	
	printf("Simple interest = %d",SI);
}
