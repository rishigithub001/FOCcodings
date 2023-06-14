#include<stdio.h>
#include<conio.h>
int main()
{
int arr[]= {2,4,6,8,10};
int sum= 0;
int length= sizeof(arr)/sizeof(arr[0]);
for(int i= 0;i< length;i++)
{
sum= sum + arr[i];
}
printf("Sum of all the elements of an array: %d",sum);
return 0;
}
