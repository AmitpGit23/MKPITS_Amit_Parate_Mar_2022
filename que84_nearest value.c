#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n2,r1,r2;
	printf("Enter any Two number : ");
	scanf("%d %d",&n1,&n2);

	r1=100-n1;
	r2=100-n2;
	if(r1<r2)
	{
		printf("%d Nearest to 100 ",n1);
	}
	else
	if(r2<r1)
	{
		printf("%d Nearest to 100 ",n2);
	}
	else
	{
		printf("Enter number is not nearest to 100 ");
	}

}

