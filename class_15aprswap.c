#include<stdio.h>
#include<conio.h>
int main()
{
	int num1,num2,temp;
	printf("Enter two no : ");
	scanf("%d %d",&num1,&num2);
	temp=num1;
	num1=num2;
	num2=temp;
	
	printf("After swap :");
	printf("num1=%d , num2=%d",num1,num2);
}
