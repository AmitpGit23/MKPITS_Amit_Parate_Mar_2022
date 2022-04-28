#include<stdio.h>
#include<conio.h>
int main()
{
	int a[5],i,t;
	for(i=0;i<=5;i++)
	{
		printf("Enter elements :  ");
		scanf("%d",&a[i]);
	}
	for(i=0;i<=5;i++)
	{
		if(i<3)
		{
			t=a[i];
			a[i]=a[5-i];
			a[5-i]=t;		}
	}
	for(i=0;i<=5;i++)
	{
		printf("a[%d]= %d\n",i,a[i]);
	}

	
	
	
}
