#include<stdio.h>
#include<conio.h>
int main()
{
	fun();
}
int fun()
{
	int n1,n2,n3,mul;
	printf("Enter first no : ");
	scanf("%d",&n1);
	printf("Enter second no : ");
	scanf("%d",&n2);
	printf("Enter third no : ");
	scanf("%d",&n3);
	
	mul=n1*n2*n3;
	
	printf("Multiplication of 3 no = %d",mul);
}
