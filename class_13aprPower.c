#include<stdio.h>
#include<conio.h>
int main()
{
	//Wap to enter x and y from key and find the power
	int x,y,i,pow=1;
	printf("enter value oy x : ");
	scanf("%d",&x);
	printf("enter the value of y :");
	scanf("%d",&y);
	i=1;
	while(i<=y)
	{
		pow=pow*x;
		i++;
	}
	printf("power = %d",pow);
}
