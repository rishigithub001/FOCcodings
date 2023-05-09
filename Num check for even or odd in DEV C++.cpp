#include<stdio.h>
#include<conio.h>
int main()
{
int num;
printf("Enter a number: ");
scanf("%d",&num);
if(num%2== 0)
printf("Given num is an even one!");
else
printf("Input number is an odd one!");
return 0;
}