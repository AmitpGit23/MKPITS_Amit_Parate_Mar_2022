//function with returntype and argument
#include<stdio.h>
#include<conio.h>
void main()
{
//	int n1,n2,s;
//	printf("Enter two no : \n");
//	scanf("%d %d",&n1,n2);
//	add();	
    fun();
}
void fun()
{
	int a=2,b=3;
	add(a,b);
}
void add(int x,int y)
{
	int s;
	s=x+y;
	printf("sum=%d",s);
}

