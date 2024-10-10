//WAP to print Fibonacci series up to given numbers 
#include<stdio.h>
int main()
{
	int a,n1=0,n2=1,n3,i;
	printf("Enter the number :-");
	scanf("%d",&a);
	printf("\nThe fibonacci series is %d %d",n1,n2);
	
	for(i=1;i<=a-2;i++)
	{
		n3 = n1 + n2;
		printf(" %d",n3);
		n1=n2;
		n2=n3;
	}
}
