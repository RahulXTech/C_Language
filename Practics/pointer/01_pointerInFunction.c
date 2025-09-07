#include<stdio.h>

void square(int n);
void square1(int *n);

int main(){
    int num = 4;
    square(num);
    printf("%d\n", num);
    square1(&num);
    printf("%d\n", num);

    return 0;
}
//Call by values.
void square(int n){
    n = n*n;
    printf("%d\n", n);
}
//Call by reference.
void square1(int *n){
    *n = (*n)*(*n);
    printf("%d\n", *n);
}