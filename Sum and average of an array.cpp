#include<stdio.h>
#include<conio.h>
int main()
{
int a[25],n,i;
float avg = 0,sum = 0;
printf("Enter the number of elements in Array:");
scanf("%d",&n);
printf("Enter the element(s):\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
sum = sum + a[i];
avg = sum/n;
printf("\nSum of element of Array is: %.2f",sum);
printf("\nAverage of element of Array is: %.f",avg);
}
}

