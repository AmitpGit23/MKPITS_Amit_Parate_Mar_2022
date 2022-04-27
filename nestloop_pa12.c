#include<stdio.h>
#include<conio.h>
int main()
{
	int r,c,n=1;
	for(r=3;r>=1;r--)
	{
		for(c=1;c<=3;c++)
		{
			if(c>=r)
			{
				printf("%d",c);
			}
			else
			{
				printf(" ");
			}			
		}
		n=1;
		printf("\n");
	}
}
