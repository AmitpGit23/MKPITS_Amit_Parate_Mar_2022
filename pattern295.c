#include<stdio.h> 
#include<conio.h>
void main()
{
    int r, c;
    for(r=69;r>=65;r--)
    {
        for(c=65;c<=r;c++)
        {
            printf("%c",r);
        }
        printf("\n");
    }
} 
