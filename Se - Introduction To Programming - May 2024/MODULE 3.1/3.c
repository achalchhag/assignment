// WAP to find area of circle, rectangle and triangle 
//rect = l*b
//tri = l*b*h
//cir= 2pi * r
#include<stdio.h>
int main()
{
	int l,b,h,r,choice,area;
	const float pi=3.14;
	float circle;
	printf("1.Area of Circle ");
	printf("\n2.Area of Rectangle ");
	printf("\n3.Area of Triangle ");
	printf("\nEnter your choice :-");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			printf("\nEnter the radius=");
			scanf("%d",&r);
			circle=2*pi*r;
			printf("\nThe area of Circle is %.2f",circle);
			break;
		case 2:
			printf("\nEnter the Length= ");
			scanf("%d",&l);
			printf("\nEnter the Breath= ");
			scanf("%d",&b);
			area = l*b;
			printf("\nThe area of Rectangle is %d",area);
			break;
		case 3:
			printf("\nEnter the Length=");
			scanf("%d",&l);
			printf("\nEnter the Breath=");
			scanf("%d",&b);
			printf("\nEnter the Height=");
			scanf("%d",&h);
			area=l*b*h;
			printf("The area of triangle is %d",area);
			break;
	}
	 
	
	
	
}
