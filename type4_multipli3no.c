#include<stdio.h>
#include<conio.h>
int main()
{
	int n1,n2,n3,mul;
	printf("Enter first no : ");
	scanf("%d",&n1);
	printf("Enter second no : ");
	scanf("%d",&n2);
	printf("Enter third no : ");
	scanf("%d",&n3);
	mul=fun(n1,n2,n3);
	printf("Multiplication = %d",mul);
}
int fun(int x,int y, int z)
{
	int mul;
	mul=x*y*z;
	return mul;
}
