/*Write a program to calculate the area of circle, rectangle and triangle using
Function Overloading
? Rectangle: Area * breadth
? Triangle: ½ *Area* breadth
? Circle: Pi * Area *Area*/
#include<iostream>
#define pi 3.14
using namespace std;
class calc{

	public:
		void area(int radius){
			cout<<"\ncircle area = "<<pi*radius*radius;
		}
		void area(double len,double width)
		{
			cout<<"\nTriangle area = "<<0.5*len*width;
		}
		void area(int len,int width)
		{
			cout<<"\nRectangle area = "<<len*width;
		}
};
int main()
{
	calc c1;
	double len,width;
	int radius,i,s;
	cout<<"Enter length and width in double = ";
	cin>>len>>width;
	cout<<"Enter radius = ";
	cin>>radius;
	cout<<"Enter length and width in int = ";
	cin>>i>>s;	
	c1.area(len,width);
	c1.area(i,s);
	c1.area(radius);
	return 0;
}
