//WAP to find reverse of string using recursion 
#include<stdio.h>
void string(char s1[])
{
	int i;
	for(i=0;s1[i] !='\0';i++)
	{
		
		if(s1[i]!='\0')
	{
		strrev(s1);
	
	}
}
	printf("\nReverse String :- %s",s1);
}
int main()
{
	char s1[30];
	printf("Enter any string: ");
	gets(s1);
	string(s1);
	return 0;
}
