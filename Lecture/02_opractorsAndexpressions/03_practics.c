#include<stdio.h>
int f1() { printf ("Jetha"); return 1;}
int f2() { printf ("Babita"); return 1;}

int main()
{
    //function working ideas
    int p = f1() + f2();

//Increament and decreamet practics ideas
	int a=10;
	int b,c;
            b = ++a;
            c = a++;
            b--;
            --c;
            b-=c;
        printf("%d",b);
    int a=10;
    int y=(++a)+(--a);
        printf("%d",y);

	return 0;
}


