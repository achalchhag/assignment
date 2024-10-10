//WAP to check if the given year is a leap year or not. 
#include<stdio.h>
int main()
{
	int year;
	printf("\nEnter the value Of year :- ");
	scanf("%d",&year);
	if(year%4==0)
	{
		printf("%d is a leap year ",year);
	}
	else
	{
		printf("%d is Not a Leap year",year);
	}
	
}
