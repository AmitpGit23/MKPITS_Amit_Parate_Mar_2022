#include<stdio.h>
#include<conio.h>
int main()
{
	int n,t;
	printf("Enter Amount : ");
	scanf("%d",&n);
	
	t=n/100;
	printf("Note of 100.0 :%d ",t);

	n=n-(t*100);
	t=n/50;
	printf("\nNote of 50.0 :%d",t);
	
	n=n-(t*50);
	t=n/20;
	printf("\nNote of 20.0 %d:",t);
	
	n=n-(t*20);
	t=n/10;
	printf("\nNote of 10.0 : %d",t);
	
	n=n-(t*10);
	t=n/5;
	printf("\nNote of 5.0 :%d",t);
	
	n=n-(t*100);
	t=n/1;
	printf("\nNote of 1.0 :%d",t);
}

