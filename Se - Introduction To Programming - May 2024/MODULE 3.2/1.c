//WAP to make simple calculator (operation include Addition, Subtraction,Multiplication, Division, modulo)
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	printf("\nEnter the 1st number :-");
	scanf("%d",&a);
	printf("\nEnter the 2nd number :-");
	scanf("%d",&b);
	printf("\nAddition of %d and %d is %d ",a,b,a+b);
	printf("\nSubtraction of %d and %d is %d ",a,b,a-b);
	printf("\nMultiplication of %d and %d is %d ",a,b,a*b);
	printf("\nDivision of %d and %d is %.2f ",a,b,(float)a/(float)b);
	printf("\nModolu of %d and %d is %d ",a,b,a%b);
}
