/*Program to understand the use of prefix and
postfix increment/decrement*/

#include<stdio.h>
int main()
{
    int x=8;
        printf("x=%d \t", x);
        printf("x=%d \t", ++x);	/*Prefix increment*/
        printf("x=%d \t", x);
        printf("x=%d \t", --x);	/*Prefix decrement*/
        printf("x=%d \n", x);   
	int x=8;
        printf("x=%d \t", x);
        printf("x=%d \t", x++);	/*postfix increment*/
        printf("x=%d \t", x);
        printf("x=%d \t", x--);	/*postfix decrement*/
        printf("x=%d \n", x);
	return 0;
}

