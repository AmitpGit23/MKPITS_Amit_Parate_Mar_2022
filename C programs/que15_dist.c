#include<stdio.h>
#include<conio.h>
int main()
{
	float a1,a2,b1,b2,dist;
	printf("Enter a1 : ");
	scanf("%f",&a1);
    printf("enter b1 : ");
    scanf("%f",&b1);
    printf("Enter a2 : ");
	scanf("%f",&a2);
    printf("enter b2 : ");
    scanf("%f",&b2);
    dist=((a2-a1)*(a2-a1))+((b2-b1)*(b2-b1));
    printf("The distance between two pint is : %.2f",sqrt(dist));
    return 0;
	
}
