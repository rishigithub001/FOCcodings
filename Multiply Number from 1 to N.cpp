 #include<stdio.h> 
 #include<conio.h>
 int main() 
 {
int input, i;
printf("Enter any number: ");
scanf("%d",&input);
for(i= 1;i<= 50;i++)
{
printf("%d x %d= %d",input, i, input*i);
return 0;
}
}

