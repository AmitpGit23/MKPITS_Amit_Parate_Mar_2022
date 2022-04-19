#include<stdio.h>
#include<conio.h>
int main()
{
	int n,n1,n2,n3,rev;
	printf("Enter 3 digit no: ");
	scanf("%d",&n);
	
	n1=n%10;
	n=n/10;
	
	n2=n%10;
	n=n/10;
	
	n3=n%10;
	
	rev=n1*100+n2*10+n3*1;
	printf("Reverce of three digit no :%d ",rev);
	
	
}
