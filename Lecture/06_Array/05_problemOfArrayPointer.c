#include<stdio.h>
int main()
{
	int arr[] = {1, 2, 3};
	int *p = arr;
        if(&p == arr) //Not same why.
        if(p == arr) //Same but why.
        printf("Same");
        else
        printf("Not same");
	return 0;
}