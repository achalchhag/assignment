//WAP to reverse a string and check that the string is palindrome or not
#include<stdio.h>
#include<string.h>
int main()
{
	char s1[50],rev[50];
	printf("\nEnter the string :-");
	gets(s1);
	strcpy(rev,s1);
	printf("\nString s1 %s",s1);
	printf("\nString after copy %s",rev);
	strrev(s1);
	printf("\nString after strrev %s",s1);
	int a=strcmp(s1,rev);
	if(a!=0)
	{
		printf("\nNot Pallindrom");
	}
	else 
	{
		printf("\nPallindrom");
	}
}
