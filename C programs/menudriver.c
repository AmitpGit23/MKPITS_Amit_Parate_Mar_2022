#include<stdio.h>
#include<conio.h>
int main()
{
	int Choice,Add,Sub,Multi,Div;
	int n1,n2;
	printf("Press 1 for Add \n");
	printf("Press 2 for Sub \n");
	printf("Press 3 for Multi \n");
	printf("Press 4 for Div \n");
	scanf("%d",&Choice);
	
	if(Choice==1)
	{
		printf("Enter two number ");
		scanf(" %d %d", &n1,&n2);
		Add=n1+n2;
		printf("The addtion of two no is %d",Add);	
	}
	else
	if(Choice==2)
	{
		printf("Enter two number ");
		scanf(" %d %d", &n1,&n2);
		Sub=n1-n2;
		printf("The Subtraction of two no is %d",Sub);	
	}
	else
	if(Choice==3)
	{
		printf("Enter two number ");
		scanf(" %d %d", &n1,&n2);
		Multi=n1*n2;
		printf("The Multiplication of two no is %d",Multi);	
	}
	else
	if(Choice==4)
	{
		printf("Enter two number ");
		scanf(" %d %d", &n1,&n2);
		Div=n1+n2;
		printf("The Division of two no is %d",Div);	
	}
	else
	{
		printf("sorry ! you press a wrong key.");
	}
	
	
	
	
}
