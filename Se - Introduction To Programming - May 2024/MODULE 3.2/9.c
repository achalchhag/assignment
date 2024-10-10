//Write a program to find out the max from given number (E.g., No: -1562 Max number is 6) 
#include<stdio.h>
int main()
{
	int n1,n2,max=0;
	printf("Enter the number to find the max :- ");
	scanf("%d",&n1);
	while(n1!=0)
	{
		n2=n1%10;
		if(n2>max)
		{
			max=n2;
		}
		n1=n1/10;
	}
	printf("The maximum Number is :- %d",max);
	
}
