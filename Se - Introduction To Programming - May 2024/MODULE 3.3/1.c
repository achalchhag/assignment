//Write a program to find out the max number from given array using function 
#include<stdio.h>
int max();
int main()
{
	int ans;
	ans=max();
	printf("\nThe Maximum number is %d",ans);
}

int max()
{
	int a[50];
	int s,i,max=0;
	printf("Enter the size of array :-");
	scanf("%d",&s);
	for(i=0;i<s;i++)
	{
		printf("\nEnter the Number a[%d]:-",i);
		scanf("%d",&a[i]);
		}
		for(i=0;i<s;i++)
		{
			printf("\n%d",a[i]);
			if(max < a[i])
			{
				max=a[i];
			}
		}
	
	return max;
}
