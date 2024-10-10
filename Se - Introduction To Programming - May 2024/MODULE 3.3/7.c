// WAP Find out length of string without using inbuilt function 
#include<stdio.h>
int len(char str[50])
{
	int l=0,i;
	for(i=0;str[i]!='\0';i++)
	{
		l++;
	}
	return l;
}
int main()
{
	char str[50];
	printf("Enter the string :-");
	gets(str);
	int size=len(str);
	printf("\nLength of string is :- %d",size);
	return 0;
}
