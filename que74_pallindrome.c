#include<stdio.h>
#include<conio.h>
int main()
{
	int d,n,n1,n2,n3,n4,n5;
	printf("Enter 5 digit no :  ");
	scanf("%d",&d);
	n=d;
	
	n1=n%10; 
	n=n/10;
	n2=n%10; 
	n=n/10;
	n3=n%10; 
	n=n/10;
	n4=n%10; 
	n=n/10;
	n5=n%10; 
    
    int r=n1*10000+n2*1000+n3*100+n4*10+n5*1;
    
    if(d==r)
    {
    	printf("This is pallindrome no");
	}
	else
	{
		printf("Not a pallindrome no");
	}
	
	
}
