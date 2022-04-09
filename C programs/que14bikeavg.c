#include<stdio.h>
#include<conio.h>
void main()
{
	float d,f,avg;
	printf("Total distance Travel By Bike (km) : ");
	scanf("%f",&d);
	printf("\nTotal fuel spend (liter): ");
	scanf("%f",&f);
	
	avg=d/f;
	printf("Average of a bike is %.2f km/ltr",avg);
	
	
}
