#include<stdio.h>
#include<conio.h>
int main()
{
	int r,c;
	for(r=5;r>=0;r--)
	{
		for(c=1;c<=r;c++)
		{
		   printf("* ",c);
		}
		printf("\n");
	}
}

