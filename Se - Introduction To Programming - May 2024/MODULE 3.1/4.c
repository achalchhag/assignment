//WAP to find simple interest
#include<stdio.h>
#include<math.h>
int main()
{
	int p,r,n,si;
	printf("Enter the P to  find the simple interest :-");
	scanf("%d",&p);
	printf("Enter the R to find the simple interest :-");
	scanf("%d",&r);
	printf("Enter the N to find the simple interest :-");
	scanf("%d",&n);
	si=p*r*n/100;
	printf("The Simple interest is :- %.2f",(float)si);
	return 0;
 } 

