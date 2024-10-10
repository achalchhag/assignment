/*WAP to take two Array input from user and sort them in ascending or descending order as per user’s choice */
#include<stdio.h>
int main()
{
	int s,i,j,ch,t;
	int a[30],b[30];
	printf("Enter the size of Array :-");
	scanf("%d",&s);
	printf("\nEnter 1st the array");
	for(i=0;i<s;i++)
	{
		printf("\nEnter the element in a[%d] :-",i);
		scanf("%d",&a[i]);
	}
	printf("\nEnter the 2nd array");
	for(i=0;i<s;i++)
	{
		printf("\nEnter the element in b[%d] :-",i);
		scanf("%d",&b[i]);
	}
	printf("\n----Choice----\n");
	printf("1.Ascending Order");
	printf("\n2.Descending Order");
	printf("\nEnter your choice :-");
	scanf("%d",&ch);
	switch (ch)
	{
		case 1:
			printf("Ascending Order");
			printf("\nOriginal array is \n");
			
			for(i=0;i<s;i++)
			{
				printf("%d ",a[i]);
			}
			
			for(i=0;i<s;i++)
			{
				printf("%d ",b[i]);
			}
			printf("\nAscending order\n");
			for(i=0;i<s;i++)
			{
				for(j=0;j<s;j++)
				{
					if(a[i]>a[j])
					{
						t=a[i];
						a[i]=a[j];
						a[j]=t;
					}
				}
			}
			for(i=0;i<s;i++)
			{
				printf("%d ",a[i]);
			}
			for(i=0;i<s;i++)
			{
				for(j=0;j<s;j++)
				{
					if(b[i]>b[j])
					{
						t=b[i];
						b[i]=b[j];
						b[j]=t;
						}
				}
			}
			printf("\n");
			for(i=0;i<s;i++)
			{
				printf("%d ",b[i]);
			}
			break;
		case 2:
			printf("Descending Order ");
			printf("\nOriginal array ");
			
			for(i=0;i<s;i++)
			{
				printf("%d ",a[i]);
			}
			
			for(i=0;i<s;i++)
			{
				printf("%d ",b[i]);
			}
			printf("\nDescending Order");
			
			for(i=0;i<s;i++)
			{
				for(j=0;j<s;j++)
				{
					if(a[i]<a[j])
					{
						t=a[i];
						a[i]=a[j];
						a[j]=t;
					}
				}
			}
			for(i=0;i<s;i++)
			{
				printf("%d ",a[i]);
			}
			
			{
				for(i=0;i<s;i++)
				{
					for(j=0;j<s;j++)
					{
						if(b[i]<b[j])
						{
							t=b[i];
							b[i]=b[j];
							b[j]=t;
						}
					}
				}
			}
			for(i=0;i<s;i++)
			{
				printf("%d ",b[i]);
			}
			break;
	}
	return 0;
}

