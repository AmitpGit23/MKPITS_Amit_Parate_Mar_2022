#include<stdio.h>
#include<conio.h>
int i=1;
void main()
{
	fun(1);
}
void fun(int a)
{
//	int i=1;
    if(a==10)
    return;
	printf("%d",a);
//	i++;
	fun(a+1);
	printf("%d \n",a);
}
