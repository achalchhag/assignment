//WAP to print number in reverse order e.g.: number = 64728 ---> reverse =82746
#include<stdio.h>
int main()
{
	int a,rev,rem;
	printf("\nEnter the Number :-");
	scanf("%d",&a);
	
	while(a!=0)
	{
		rem=a%10;
		rev=rev *10+ rem;
		a=a/10;
	}
	printf("\nReminder is %d",rev);
}
