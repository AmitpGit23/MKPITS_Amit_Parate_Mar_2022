#include<stdio.h>
#include<conio.h>
void main()
{
	add();
	sub();
	mul();
	div();
}
void add()
{
	int n1,n2,s;
	printf("Enter two No : \n");
	scanf("%d \n %d",&n1,&n2);
	s=n1+n2;
	printf("Sum= %d \n",s);
}
void sub()
{
	int n1,n2,sub;
	printf("Enter two No : \n");
	scanf("%d \n %d",&n1,&n2);
	sub=n1-n2;
	printf("substraction= %d \n",sub);
}
void mul()
{
	int n1,n2,mul;
	printf("Enter two No : \n");
	scanf("%d \n %d",&n1,&n2);
	mul=n1*n2;
	printf("Multiplication= %d \n",mul);
}
void div()
{
	int n1,n2,div;
	printf("Enter two No : \n");
	scanf("%d \n %d",&n1,&n2);
	div=n1/n2;
	printf("Division= %d \n",div);
}
