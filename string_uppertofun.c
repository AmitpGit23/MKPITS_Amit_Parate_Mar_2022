#include<stdio.h>
#include<conio.h>
int main()
{
	char n[40];
	int i;
	printf("Enter any string : ");
	scanf("%s",n);
	for(i=0;n[i]!=0;i++)
	{
		if(n[i]>='a' && n[i]<= 'z')
		{
			n[i]=n[i]-32;
		}
	}
	printf("String : %s",n);
}
