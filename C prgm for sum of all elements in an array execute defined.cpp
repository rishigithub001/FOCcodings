#include<stdio.h>
#include<conio.h>
int main() 
{
int n, i, sum = 0;
printf("Enter the no. of elements[<= 12]: ");
scanf("%d", &n);
if (n > 12) 
{
printf("The number of elements must be <= 12.\n");
return 0;
}
printf("Enter the values of the %d elements: ", n);
for (i = 0; i < n; i++) 
{
int num;
scanf("%d", &num);
sum += num;
}
printf("The sum result is: %d\n", sum);
return 0;
}

