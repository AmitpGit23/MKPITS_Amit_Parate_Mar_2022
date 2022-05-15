#include<stdio.h>
#include<conio.h>
void main()
{
    int r,c,k;
    for(r=1;r<=3;r++)
    {
        for(c=1;c<=3-r;c++)
        {
            printf(" ");
        }
        for(k=1;k<=r;k++)
        {
            printf("%c",(char)(r+64));
        }
        printf("\n");        
    }
} 

