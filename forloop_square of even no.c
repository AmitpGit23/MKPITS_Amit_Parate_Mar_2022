#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n ,i1;
	printf("Enter any no :");
	scanf("%d",&n);
	printf("Square of all Even value is  \n",n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			i1=i*i;
			printf("%d = %d \n",i,i1);
		}	    
    }
}
