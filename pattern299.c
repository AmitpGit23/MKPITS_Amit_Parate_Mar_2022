#include <stdio.h>  
#include<conio.h>  
void main()  
{  
    int r,c,k,a=1;  

    for(r=3;r>=1;r--)  
    {  
        for(c=1;c<=r-1;c++)  
        {  
          printf(" ");  
        }  
        for(k=1;k<=a;k++)  
        {  
            printf("*");  
        }  
        printf("\n");  
        a++;  
    }  
} 
