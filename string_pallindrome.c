//wap to program to enter any name and //check whether it pallindrome or not
#include<stdio.h>
#include<conio.h>
int main()
{
	char n1[10],s;
	char n2[10];
	printf("Enter any string : \n");
	scanf("%s",&n1);
	strcpy(n2,n1);     //taking backup of string
	strrev(n1);        // string revrse
	s=strcmp(n2,n1);   //string compare
	if(s==0)
	{
		printf("This is a Pallindrome ");
	}
	else
	{
		printf("Not a pallindrome");
	}
}
