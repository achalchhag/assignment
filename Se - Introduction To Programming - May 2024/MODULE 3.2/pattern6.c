/*
A
A B 
A B C 
A B C D
A b C D E 
*/
#include<stdio.h>
int main()
{
	int i,j,row;
	char a='A';
	printf("Enter the number of rows :-");
	scanf("%d",&row);
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c ",a);
			a++;
		}
		printf("\n");
	}
}
