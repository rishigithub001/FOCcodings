#include<stdio.h>
#include<string.h>
int main()
{
int a;
char name;
printf("Enter your name: ");
scanf("%s",&name);
printf("Enter your Marks: ");
scanf("%d",&a); 
if(a>=50 && a<=59)
printf("Result= Pass.\n Grade= E");
else if(a>=60 && a<=69)
printf("Result= Pass.\n Grade= D");
else if(a>=70 && a<=79)
printf("Result= Pass.\n Grade= C");
else if(a>=80 && a<=89)
printf("Result= Pass.\n Grade= B");
else if(a>= 90 && a<= 100)
printf("Result= Passed with Rank.\n Grade= A");
else if(a<50)
printf("you are fail.\n grade= F");
printf("You have failed %s.\n",name);
else
printf("null");
return 0;
}