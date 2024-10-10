//5. Sum of even numbers
#include<stdio.h>
int main()
{
	int num1,i,sum,even=0;
	printf("\nEnter the value of num1 = ");
	scanf("%d",&num1);
	for(i=1;i<=num1;i++)
	{
		printf("\n%d ",i);
		if(i%2==0)
		{
			
			even++;
			sum=sum+i;
		}
	
	}
	printf("\nSum of even numbers is :-%d",sum);
	printf("\nCount of even number = %d",even);
	
	return 0;
	
}
