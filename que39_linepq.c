#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,i,j,l=1;
	printf("input number of lines : ");
	scanf("%d",&a);
	printf("Input of number in a lines : ");
	scanf("%d",&b);
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=b;j++)
		{
			printf("%d  ",l);
			l++;
		}
		printf("\n");
	}
}
