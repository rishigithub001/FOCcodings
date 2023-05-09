#include<stdio.h>
#include<conio.h>
int main()
{
int max, num, n;
printf("Enter the number of integers to find the maximum: ");
scanf("%d", &n);
printf("Enter %d integers:\n", n);
scanf("%d", &max); 
for (int i = 1; i < n; i++) 
{
scanf("%d", &num);
if (num > max) 
{
max = num;
}
}
printf("The maximum of the %d integers is %d\n", n, max);
return 0;
}
