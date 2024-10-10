//WAP of Addition, Subtraction, Multiplication and Division using Switch case.(Must Be Menu Driven)

#include<stdio.h>
#include<math.h>
int main()
{
	int choice;
	float a,b,total;
	printf("MENU");
	printf("\n1.Addition");
	printf("\n2.Subtraction");
	printf("\n3.Multiplication");
	printf("\n4.Division");
	printf("\n5.Exit");
	printf("\nEnter Your choice (1 to 5) :-");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("\nEnter the 1st number :-");
			scanf("%f",&a);
			printf("\nEnter the 2nd number :-");
			scanf("%f",&b);
			total=a+b;
			printf("\nThe addition of %.2f and %.2f is %.2f",a,b,total);
			break;
		case 2:
			printf("\nEnter the 1st number :-");
			scanf("%f",&a);
			printf("\nEnter the 2nd number :-");
			scanf("%f",&b);
			total=a-b;
			printf("\nThe Subtraction of %.2f and %.2f is %.2f",a,b,total);
			break;
		case 3:
			printf("\nEnter the 1st number :-");
			scanf("%f",&a);
			printf("\nEnter the 2nd number :-");
			scanf("%f",&b);
			total=a*b;
			printf("\nThe Multiplication of %.2f and %.2f is %.2f",a,b,total);
			break;
		case 4:
			printf("\nEnter the 1st number :-");
			scanf("%f",&a);
			printf("\nEnter the 2nd number :-");
			scanf("%f",&b);
			total=a/b;
			printf("\nThe Division of %.2f and %.2f is %.2f",a,b,total);
			break;
		case 5:
			printf("\nExiting the program ");
			break;
		default :
			printf("\nEnter a valid choice");
	}
	

	
}

