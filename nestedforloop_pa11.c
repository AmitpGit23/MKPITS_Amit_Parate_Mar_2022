#include<stdio.h>
#include<conio.h>
int main()
{
	int r, c,sp,str;
	for(r=1;r<=10;r++)
	{
		for(sp=1;sp<=40-r;sp++)
		{   
			printf("  ");
		
		}
		for(str=1;str<=r;str++)
		{
			printf("  * ");
		}
		printf("\n");
	}
}
