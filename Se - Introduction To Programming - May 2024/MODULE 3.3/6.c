/*WAP to make addition, Subtraction and multiplication of two matrix using 2-D Array
*/
#include<stdio.h>
int main()
{
	int i,j,k,ch,s;
	int a[50][50],b[50][50],ans[50][50];
	printf("Enter the size of matrix ");
	scanf("%d",&s);
	printf("Enter the elements");
	for(i=0;i<s;i++)
	{
		for(j=0;j<s;j++)
		{
			printf("\nEnter the elements in a[%d][%d] :-",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<s;i++)
	{
		for(j=0;j<s;j++)
		{
			printf("\nEnter the element in b[%d][%d] :-",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("\nOriginal array is \n");
	for(i=0;i<s;i++)
	{
		for(j=0;j<s;j++)
		{
			printf("%d ",a[i][j]);
			}
			printf("\n");
		}
	printf("\n");
	for(i=0;i<s;i++)
	{
		for(j=0;j<s;j++)
		{
			printf("%d " ,b[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	printf("\n1.Addition");
	printf("\n2.Subtraction");
	printf("\n3.Multiplication");
	printf("\nEnter the choice = ");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:
			for(i=0;i<s;i++)
			{
				for(j=0;j<s;j++)
				{
					ans[i][j]=a[i][j]+b[i][j];
				}
			}
			printf("\nThe addition is :-\n");
			for(i=0;i<s;i++)
			{
				for(j=0;j<s;j++)
				{
					printf("%d ",ans[i][j]);
				}
				printf("\n");
			}
			
			break;
		case 2:
			for(i=0;i<s;i++)
			{
				for(j=0;j<s;j++)
				{
					ans[i][j]=a[i][j]-b[i][j];
				}
			}
			printf("\nThe Subtraction is :-\n");
			for(i=0;i<s;i++)
			{
				for(j=0;j<s;j++)
				{
					printf("%d ",ans[i][j]);
				}
				printf("\n");
			}
			break;
		case 3:
			for(i=0;i<s;i++)
			{
				for(j=0;j<s;j++)
				{
					for(k=0;k<s;k++)
					{
						ans[i][j]=ans[i][j]+(a[i][k]*b[k][j]);
					}
				}
			}
			printf("\nMultiplication is :- \n");
			for(i=0;i<s;i++)
			{
				for(j=0;j<s;j++)
				{
					printf("%d ",ans[i][j]);
				}
				printf("\n");
			}
	}
	
	return 0;
}
