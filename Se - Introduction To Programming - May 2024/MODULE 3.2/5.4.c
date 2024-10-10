//4. How many odd numbers are there
#include<stdio.h>
int main()
{
	int num1,i,odd=0,even=0;
	printf("\nEnter the value of num1 = ");
	scanf("%d",&num1);
	for(i=1;i<=num1;i++)
	{
		printf("\n%d",i);
		if(i%2==0)
		{
			
			even++;
		}
		else
		{
			odd++;
		}
	
	}
	printf("\nCount of Odd number = %d",odd);
	
	return 0;
	
}

