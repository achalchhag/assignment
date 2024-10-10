/*5.3
How many Even numbers are there */
#include<stdio.h>
int main()
{
	int num1,i,even=0;
	printf("\nEnter the value of num1 = ");
	scanf("%d",&num1);
	for(i=1;i<=num1;i++)
	{
		printf("\n%d",i);
		if(i%2==0)
		{
			
			even++;
		}
	
	}
	printf("\nCount of even number = %d",even);
	
	return 0;
	
}

