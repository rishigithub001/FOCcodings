#include <stdio.h>
#include<conio.h>
int main() 
{
   int n = 12;
   int sum = (n * (n + 1) * (2 * n + 1)) / 6;
   printf("The sum of squares of %d natural numbers is %d",n, sum);
   return 0;
}
