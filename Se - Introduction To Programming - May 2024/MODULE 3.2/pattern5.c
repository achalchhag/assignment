/*
1
2  3
4  5  6
7  8  9  10
11 12 13 14 15
*/

#include<stdio.h>
int main()
{
	int i,j,a,p=1;
	printf("\nEnter the number of Rows :-");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",p);
			p++;
		}
		printf("\n");
	}
}
