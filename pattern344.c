#include<stdio.h>
#include<conio.h>
int main()
{
	int r, c,sp,n=65;
	for(r=1;r<=4;r++)
	{
		for(sp=1;sp<=20-r;sp++)
		{   
			printf("  ");
		
		}
		for(c=1;c<=r;c++)
		{
			printf("%c  ",n);
		}
		n=n+2;
		printf("\n");
	}
}
