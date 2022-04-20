#include<stdio.h>
#include<conio.h>
int main()
{
	int i ,n;
	printf("enter the value of n :");
	scanf("%d",&n);
	printf("Print odd no between 0 to n");
	for(i=1;i<=n;i++)
		{
			if(i%2!=0)
			{
			   printf("%d \n",i);
	     	}
		}
}

