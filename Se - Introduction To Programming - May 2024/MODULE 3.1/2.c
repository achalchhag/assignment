/*
Write a program to make Simple calculator 
(to make addition, subtraction,multiplication, division and modulo) 
*/
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,add,sub,mult,div,mod;
	printf("Enter the 1st value:- ");
	scanf("%d",&a);
	printf("\nEnter the 2nd value:- ");
	scanf("%d",&b);
	add=a+b;
	printf("\nThe addition of %d & %d is  %d",a,b,add);
	sub=a-b;
	printf("\nThe subtraction of %d & %d is %d",a,b,sub);
	mult=a*b;
	printf("\nThe multiplication of %d & %d is %d",a,b,mult);
	div=a/b;
	printf("\nThe division of %d & %d is %.2f",a,b,(float)mult);
	mod=a%b;
	printf("\nThe module of %d & %d is %.2f",a,b,(float)mod);
	return 0;
}
