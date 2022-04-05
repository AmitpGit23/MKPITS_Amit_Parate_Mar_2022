#include<stdio.h>
#include<conio.h>
void main(){
	int num,n1,n2,n3,a1;
	int a2,a3,armR;
	printf("Enter any 3 digit No : ");
	scanf("%d",&num);
	n1=num%10;
	num=num/10;
	n2=num%10;
	num=num/10;
	
	n3=num%10;
	a1=n1*n1*n1;
	a2=n2*n2*n2;
	a3=n3*n3*n3;
	armR=a1+a2+a3;
	if(num==armR);
	{
		printf("your no is Armstrong NO");
	}
    if(num=!armR)
	{
		printf("Your no is not a Armstrong No ");
	}
}
