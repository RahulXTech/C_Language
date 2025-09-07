#include<stdio.h>
void swap(int a, int b);
void _swap(int *a, int *b);

int main(){
    int x = 3;
    int y = 7;
    swap(x,y);
    printf("%d%d\n",x,y);
    _swap(&x,&y);
    printf("%d%d\n",x,y);
    return 0;
}
void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
    printf("%d%d\n",a,b);
}
void _swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("%d%d\n",*a, *b);
}
