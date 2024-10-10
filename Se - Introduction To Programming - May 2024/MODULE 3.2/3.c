// WAP to find number is even or odd using ternary operator 
#include<stdio.h>
int main()
{
	
	int a;
	printf("Enter the Number :- ");
	scanf("%d",&a);
	
	(a%2==0) ? printf("\n%d is the Even number",a) : printf("\n%d is the odd number",a);
}
