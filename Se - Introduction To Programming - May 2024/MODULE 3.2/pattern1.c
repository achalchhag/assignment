/*
Patterns: 
1
1 0
1 0 1
1 0 1 0
1 0 1 0 1
*/

#include<stdio.h>
int main()
{
	int i,j,a;
	printf("\nEnter the number of Rows :-");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(j%2==0)
			{
				printf("0 ");
			}
			else 
			{
				printf("1 ");
			}
			
		}
		printf("\n");
	}
	return 0;
}
