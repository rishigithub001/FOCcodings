#include<stdio.h>
int main()
{
int i, j= 1, num;
printf("Enter a number of your choice:");
scanf("%d",&num);
for(i=1;i<= num;i++)
{
j= j*i;
}
printf("The factorial of the number %d is:%d",num,j);
return 0;
}