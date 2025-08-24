/*Program to understand the use of comma operator*/

#include<stdio.h>
int main()
{
	int a, b, c, res;
	res = (a=8, b=7, c=9, a+b+c);	
	printf("Output=%d", res);

/*Program to interchange the value of two variables using comma operator*/
    int a=8,b=7,temp;
	printf("a=%d, b=%d\n", a, b);
	temp=a,a=b,b=temp;
	printf("a=%d, b=%d\n",a,b);

	return 0;
}

