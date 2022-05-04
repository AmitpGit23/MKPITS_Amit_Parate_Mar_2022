#include<stdio.h>
#include<conio.h>
void main()
{
	add();
}
void add()
{
	int n1,n2,add;
	printf("Enter 2 no : \n");
	scanf("%d %d",&n1,&n2);
	
	add=n1+n2;
	printf("sum = %d",add);
}
