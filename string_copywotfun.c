
#include<stdio.h>
#include<conio.h>
int main()
{
	char n1[20],n2[20];
	int i;
	printf("Enter any string : ");
	scanf("%s",n1);
	printf("Name : %s\n",n1);
	for(i=0;n1[i]!='\0';i++)
	{
		n2[i]=n1[i];		
	}
	printf("copy string : %s",n2);
}
