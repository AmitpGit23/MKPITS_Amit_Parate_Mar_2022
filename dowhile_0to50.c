#include <stdio.h>
#include <conio.h>
int main()
{
	int i=0;
	printf("Even No betweem  0 to 50 : ");
	i=0;
	do
	{
		if(i%2==0)
		{
			printf("%d \n",i);
		}
		i++;
	}
	while(i<=50);
}
