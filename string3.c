#include<stdio.h>
#include<conio.h>
void main()
{
	char name[5]={"Amit"};
	int len;
	
	len=strlen(name);
	strrev(name);
	printf("%d",len);
	
}
