#include<stdio.h>
#include<conio.h>
void main()
{
	float s;
	s=spd();
	printf("The speed = %.2f km/hr",s);
}
int spd()
{
	float d,t,s;
	printf("Enter the distance(km) : ");
	scanf("%f",&d);
	printf("Enter the time(hr) : ");
	scanf("%f",&t);
	s=d/t;
	return s;
	
}
