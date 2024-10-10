//WAP to swap two numbers without using third variable 
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the 1st number :- ");
	scanf("%d",&a);
	printf("Enter the 2nd number :- ");
	scanf("%d",&b);
	printf("\nThe number before swapping are %d and %d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nThe number after swapping are %d and %d",a,b);
}

