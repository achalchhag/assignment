/*
        *
      * * *
    * * * * *
  * * * * * * * 
* * * * * * * * *
*/
#include<stdio.h>
int main()
{
	int i,j,k,row,space;
	printf("\nEnter the value of Row :-");
	scanf("%d",&row);
	
	space=row-1;
	for(i=1;i<=row;i++)
	{
		for(j=space;j>=1;j--)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf("* ");
		}
		space--;
		printf("\n");
	}
}
