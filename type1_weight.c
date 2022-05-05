#include<stdio.h>
#include<conio.h>
void main()
{
	weight();
}
void weight()
{
	float w1,w2,avg;
	printf("Enter weight of Two items :");
	scanf("%f %f",&w1,&w2);
	avg=(w1+w2)/2;
	printf("Average weight of Two item is : %f",avg);
}
