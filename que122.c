/*Write a C program to check whether a given array of integers contains 5's and 7's*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,t=0;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array element : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] == 5 || a[i] == 7) 
        {
            t=1;
            break;
        }
    }

    if(t==1)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }
} 
