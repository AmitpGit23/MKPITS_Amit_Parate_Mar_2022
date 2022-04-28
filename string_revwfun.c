#include<stdio.h>
#include<conio.h>
int main()
{
	char n[20];
	int i,c =0;
	printf("Enter any string : ");
	scanf("%s",n);
	
	for (i=0;n[i]!='\0';i++)
	{
		c=c+1;
	}
	for(i=c-1;i>=0;i--)
	{
		printf("%c",n[i]);
	}
	
	
}
