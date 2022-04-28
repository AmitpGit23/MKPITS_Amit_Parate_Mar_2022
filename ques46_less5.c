#include<stdio.h>
#include<stdio.h>
int main()
{
	int ar[5],i;
	printf("Enter the elements \n");
//	scanf("%s",ar);
	for(i=0;i<5;i++)
	{
		printf("Enter no : ");
		scanf("%d",&ar[i]);
		
	}
	for(i=0;i<5;i++)
	{
		if(ar[i]<5)
		{
			printf("ar[%d]=%d \n",i,ar[i]);
		}
	}
}
