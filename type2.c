// argument with no returntype
#include<stdio.h>
#include<conio.h>
void main()
{
	add();
}
void add()
{
	int n1,n2,s;
	printf("Enter two No : \n");
	scanf("%d \n %d",&n1,&n2);
	s=n1+n2;
	printf("Sum= %d",s);
}
