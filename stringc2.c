#include<stdio.h>
#include<conio.h>
int main()
{
	// to prove string is stored like and array?
	int i;
    char name[10];
    printf("Enter your name : ");
    scanf("%s",&name);
//    for(i=1;i<=10;i++)
//    {
//    	printf("%c ",name[i]);
//	}
    for(i=0;name[i]!="\0";i++)
    {
    	printf("%c",name[i]);
	}
}

