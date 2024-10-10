//WAP to print factorial of given number
#include<stdio.h>
int main()
{
	int a,fact=1,i;
	printf("Enter the Number :-");
	scanf("%d",&a);
	
	for(i=a;i>=1;i--)
	{
		fact = fact * i;
	}
	printf("Factorial of the %d is :-%d",a,fact);
	return 0;
}	
