#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char n1[10];
	int i,c=0;
	printf("Enter Any name : ");
	scanf("%s",n1);
	
	for(i=0;n1[i]!='\0';i++)
	{
		c=c+1;
	}
	printf("Lenght=%d",c);
}
