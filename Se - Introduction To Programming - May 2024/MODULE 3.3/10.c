/*Write a program of structure for five employee that provides the following
information -print and display empno, empname, address and age */
#include<stdio.h>
struct employee
{
	int empno;
	char empname[50];
	char add[50];
	int age;
};
int main()
{
	struct employee e;
	int i,s;
	printf("\nEnter the Employee count :-");
	scanf("%d",&s);
	for(i=0;i<s;i++)
	{
		printf("\n");
		printf("Enter the empno :-");
		scanf("%d",&e.empno);
		printf("Enter the empname :-");
		scanf("%s",&e.empname);
		printf("Enter the address :-");
		scanf("%s",&e.add);
		printf("Enter the age :-");
		scanf("%d",&e.age);
	}
	for(i=0;i<s;i++)
	{
		printf("\nEmpno is :- %d",e.empno);
		printf("\nEmpname is :- %s",e.empname);
		printf("\nAddress is :- %s",e.add);
		printf("\nAge is :- %d",e.age);
		printf("\n");
		
	}
	return 0;
}

