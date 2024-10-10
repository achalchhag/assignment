//WAP to show1. Monday to Sunday using switch case

#include<stdio.h>
int main()
{
	int choice;
	printf("\nEnter your choice to print Monday to Sunday ");
	scanf("%d",&choice);
	switch(choice)
		{
		case 1:
			printf("\nMonday\n");
			break;
			case 2:
			printf("\nTuesday\n");
			break;
			case 3:
			printf("\nWednesday\n");
			break;
		case 4:
			printf("\nThursday\n");
			break;
		case 5:
			printf("\nFriday\n");
			break;
		case 6:
			printf("\nSaturday\n");
			break;
		case 7:
			printf("\nSunday\n");
			break;
		default	:
			printf("\nEnter the number between 1 to 7");
		}
	}
	
	
	

