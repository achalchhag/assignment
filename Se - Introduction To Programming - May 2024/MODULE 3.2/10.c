//Write a program make a summation of given number (E.g., 1523 Ans: -11) 
#include<stdio.h>
int main()
{
	int a,rem,sum=0;
	printf("\nEnter the number :-");
	scanf("%d",&a);
	while(a!=0)
	{
		rem=a%10;
		sum=sum+rem;
		a=a/10;
	}
	printf("Summation of number is :- %d",sum);
}
