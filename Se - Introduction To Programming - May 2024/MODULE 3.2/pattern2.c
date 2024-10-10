/*Write a pttern
A
B C
D E F 
G H I J
K L M N O */

#include<stdio.h>
int main()
{
	int i,j,a;
	char p='A';
	printf("\nEnter the number of Rows :-");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c ",p);
			p++;
		}
		printf("\n");
	}
}
