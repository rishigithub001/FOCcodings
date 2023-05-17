#include<stdio.h>
#include<math.h>
#include<conio.h>
double hypotenuse(double x, double y, double z);
int main(void) 
{
double side1, side2, side3, counter;
side3 = 1;
for (counter = 0; counter <= 2; counter++) {
printf("Enter values for two sides(Base & Height): ");
scanf("%d %d", &side1, &side2);
printf("%.2f\n", hypotenuse(side1, side2, side3));
}
return 0;
}
double hypotenuse(double x, double y, double z) {
x *= x;
y *= y;
z = sqrt(x + y);
return z;
}
