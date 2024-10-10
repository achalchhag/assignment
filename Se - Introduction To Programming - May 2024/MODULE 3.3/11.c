//WAP to show difference between Structure and Union
#include<stdio.h>
#include<string.h>
struct detail
{
	char name;
	int age;
};
union data
{
	char ch;
	int a;
};
int main()
{
printf("Structure\n");
    struct detail d;
    printf("\nEnter your name :-");
    scanf(" %c", &d.name);
    printf("\nEnter your age :-");
    scanf("%d", &d.age);
    
    printf("\nName is %c", d.name);
    printf("\nAge is %d", d.age);

    printf("\nUnion\n");
    union data d1;
    printf("\nEnter a character :-");
    scanf(" %c",&d1.ch);    

    printf("\nCharacter is %c ", d1.ch);
    printf("\nAscii value is is %d ", d1.a);

    }
