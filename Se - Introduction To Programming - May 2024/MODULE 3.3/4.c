//WAP to find factorial using recursion 
#include<stdio.h>
int display(int num)
{
	if(num!=0)//if(num>1),if(num>=1)
	{
		return num * display(num-1);
}
	else {
		return 1;
	}
}
int main()
{
	int num,r;
	printf("Enter the value of num :-");
	scanf("%d",&num);
	r=display(num);
	printf("Result is :- %d",r);
	return 0;
}
