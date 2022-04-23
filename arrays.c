#include<stdio.h>
#include<conio.h>
int main()
{
	// array is a collection of homoginious data . or  a collection of similor data element
	int i,a[3];
	printf("enter 3 number : \n");
	for(i=0;i<=2;i++)
	{
		printf("a[%d]= ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<=2;i++)
	{
		printf("a[%d]=%d \n",i,a[i]);
	}
}
