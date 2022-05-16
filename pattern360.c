#include<stdio.h>
#include<conio.h>
int main()
{
	int r, c,n=1,sp;
	for(r=1;r<=7;r++)
	{
		for(sp=1;sp<=20-r;sp++)
		{   
			printf("  ");
		
		}
		for(c=1;c<=r;c++)
		{
			printf(" %c  ",c+64);
		}
		r=r+1;
		printf("\n");
	} 
}
