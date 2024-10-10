//WAP to convert years into days and days into years 
#include<stdio.h>
#include<math.h>
int main()
{
	int a;
	float year,day;
	printf("\n1.Convert Years into days");
	printf("\n2.Convert days into years");
	printf("\nEnter Your choice :-");
	scanf("%d",&a);
	if(a==1)
	{
		printf("\nEnter the Years :-");
		scanf("%f",&year);
		printf("\nDays is %.2f",year*365);
	}
	else if(a==2)
	{
		printf("\nEnter the Days :-");
		scanf("%f",&day);
		printf("\nYears is %.2f",day/365);
	}
	else
	{
		printf("Invalid. Enter 1 or 2");
	}
}
