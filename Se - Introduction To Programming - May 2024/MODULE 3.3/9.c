/* Write a program of structure employee that provides the following
information -print and display empno, empname, address and age */
#include<stdio.h>
#include<string.h>
struct employee
{
	int empno;
	char ename[50];
	char add[100];
	int age;
};
int main()
{
	struct employee e;
	printf("Enter the details of employee");
	printf("\nEnter the Empno :-");
	scanf("%d",&e.empno);
	printf("\nEnter the empname :-");
	scanf("%s",&e.ename);
	printf("\nEnter the address :-");
	scanf("%s",&e.add);
	printf("\nEnter the age :-");
	scanf("%d",&e.age);
	printf("\nThe details of the Employee\n");
	printf("\nEmpno is :-%d",e.empno);
	printf("\nEmpname is :-%s",e.ename);
	printf("\nAddress is :-%s",e.add);
	printf("\nAge is :-%d",e.age);
}
