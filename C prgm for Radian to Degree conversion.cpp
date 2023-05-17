#include <stdio.h>
#include <conio.h>
double Convert(double radian)
{
	double pi = 3.14159;
	return(radian * (180/pi));
}
int main(){
	double radian = 5.0;
	double degree = Convert(radian);
	printf("%.5lf", degree);
	return 0;
}

