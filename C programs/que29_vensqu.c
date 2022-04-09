#include<stdio.h>
#include<conio.h>
int main()
{
	int i=1,n ,i1;
	printf("Enter any no :");
	scanf("%d",&n);
	printf("Square of all Even value is :%d \n",n);
	while(i<=n)
	{
		if(i%2==0)
		{
			i1=i*i;
			printf("%d = %d \n",i,i1);
		}
		i++;	    
    }
}
