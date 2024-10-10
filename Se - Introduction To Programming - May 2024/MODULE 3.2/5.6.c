//6. Sum of odd numbers
#include<stdio.h>
int main()
{
	int num1,i,sum,odd=0,even=0;
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
			sum=sum+i;
		}
	
	}
	printf("\nCount of Odd number = %d",odd);
	printf("\nSum of odd number :- %d",sum);
	return 0;
	
}

