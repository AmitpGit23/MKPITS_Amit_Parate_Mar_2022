#include<stdio.h>
#include<conio.h>
int main()
{
	int s;
	char n1[5]={"1234"};
	char n2[5];
	printf("Enter a password : ");
	scanf("%s",n2);
	s=strcmp(n1,n2);
	if(s==0)
	{
		printf("correct password");
	}
	else
	{
		printf("Incorrect Password");
	}
}
