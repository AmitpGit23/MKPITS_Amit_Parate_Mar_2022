#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,j=1,x=0;
	printf("Input number of lines : ");
	scanf("%d",&n);
	for(i-1;i<=n;i++)
	{
		while(x<3)
		{
			printf("%d ",j++);
			x++;
		}
		x=0;
		printf("\n");
	}
}
