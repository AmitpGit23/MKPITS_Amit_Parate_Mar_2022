#include<stdio.h>
#include<conio.h>
int main()
{
	int n,n1,n2,n3,add;
	printf("Enter 3 digit No : ");
	scanf("%d",&n);
	
	n1=n%10;
	n=n/10;
	
	n2=n%10;
	n=n/10;
	
	n3=n%10;
	
	add=n1+n2+n3;
	printf("Addtion of 3 digit No : %d ",add);
}
