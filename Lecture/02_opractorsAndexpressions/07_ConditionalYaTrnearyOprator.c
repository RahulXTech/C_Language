/* Program to print the larger of two numbers
using conditional operator */

#include<stdio.h>
int main()
{
 	int x,y,max;
	printf("Enter values for x and y :");
	scanf("%d%d",&x,&y);
	max= x>y ? x : y;
	printf("Larger of %d and %d is %d", x, y, max);
	return 0;
}

//Also you should try to nested terneary oprator.