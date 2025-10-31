//created by sakshi
#include <stdio.h>
int main()
{
      int n,a,b,c,sum,s1;
      printf("Enter 3-Digit Number: ");
      scanf("%d",&n);
      b=n/100;
      s1=n%100;
      a=s1%10;
      c=s1/10;
      printf("\nFirst Digit  = %d \nMiddle Digit = %d \nLast Digit   = %d\n",b,c,a);
      sum=a+c+b;
      printf("\nSum of All 3-Digits : %d",sum);
      return 0;
}