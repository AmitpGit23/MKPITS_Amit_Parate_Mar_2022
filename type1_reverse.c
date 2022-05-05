#include <stdio.h>
#include <conio.h>
void main()
{
	reverse();
}

void reverse() {
  int num,n1,n2,n3,r;
  printf("Enter 3 Digit No : ");
  scanf("%d",&num);
  n1=num%10;
  num=num/10;
  
  n2=num%10;
  num=num/10;
  
  n3=num%10;
  r=n1*100+n2*10+n3*1;
  printf("reverse of 3 digit no is %d", r);
  }
