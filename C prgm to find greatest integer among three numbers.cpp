#include<stdio.h>
#include<conio.h>
int maxOfThree(int a, int b, int c) 
{
printf("Enter any three numbers of your choice:");
scanf("%d%d%d",&a,&b,&c);
int max = a;
if (b > max) 
{
max = b;
}
if (c > max) 
{
max = c;
}
return max;
}
