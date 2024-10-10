// Write a program you have to make a summation of first and last Digit. (E.g., 1234 Ans: -5) 
#include<stdio.h>
int main()
{
	int a,first,last,sum=0;
	printf("\nEnter the number :-");
	scanf("%d",&a);
	last=a%10;
	
	while(a>=9)
	{
		a=a/10;
	}
	first=a;
	sum=last+first;
	printf("\nThe sum of %d and %d is %d",first,last,sum);

	return 0;
}
