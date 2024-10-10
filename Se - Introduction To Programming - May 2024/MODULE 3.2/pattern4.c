/*
*
**
***
****
*****
****
***
**
*
*/
#include<stdio.h>
int main()
{
	int i,j,k,row,row1;
	printf("\nEnter the number of row :-");
	scanf("%d",&row);
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	row1=row-1;
	for(i=1;i<=row;i++)
	{
		for(k=row1;k>=1;k--)
		{
			printf("* ");
		}
		row1--;
		printf("\n");
	}
}
