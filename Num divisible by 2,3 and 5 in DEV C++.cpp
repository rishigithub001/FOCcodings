#include<stdio.h>
#include<conio.h>
int main()
{
int a;
printf("Enter any number of your choice: ");
scanf("%d",&a);
if(a%2== 0)
printf("Divisible by 2\n");
if(a%5== 0)
printf("Not Divisible by 2 but by 5\n");
if(a%3== 0)
printf("Not Divisible by 2 and 5 but by 3\n");
else 
printf("Divisible by none!");
return 0;
}