#include<stdio.h>
#include<conio.h>
void main()
{
	//wap to enter string from a keyboard and check ovel in a string
	char n[30];
	int i,vowel=0;
	
	printf("Enter Any String : ");
	scanf("%s",n);
	
	for(i=0;n[i]!='\0';i++)
	{
		if(n[i]=='a'||n[i]=='i'||n[i]=='o'||n[i]=='e'||n[i]=='u')
		{
			vowel=vowel+1;
		}
	}
	printf("vowel = %d ",vowel);
}
