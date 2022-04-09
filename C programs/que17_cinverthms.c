#include<stdio.h>
#include<conio.h>
void main()
{
	int n,hour,min,sec;
	printf("Enter any Number(sec) : ");
	scanf("%d",&n);
	
	hour = (n/3600);
	printf("Hour = %d\n",hour);
 
	min = (n -(3600*hour))/60;
	printf("Minute = %d\n",min);
 	
	sec = (n -(3600*hour)-(min*60));
	printf("Seconds = %d",sec);
	
}
