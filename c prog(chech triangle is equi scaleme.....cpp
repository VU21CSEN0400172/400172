#include<stdio.h>
int main()
{
	int side1 ,side2, side3;
    printf("enter sides of triangle");
	scanf("%d %d %d ,&side1, &side2, &side3");
	if(side1 == side2 && side2 == side3)
	printf("the given triangle is equilateral");
	else if(side1 == side2|| side2 == side3 ||  side3 == side1)
	printf("the given triangle is isoceles");
	else 
	printf("the given triangle is scalene"); 
}
