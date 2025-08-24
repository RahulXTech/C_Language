/* Program to understand logical/boolean operators*/
#include <stdio.h>
int main()
{
    int a=40, b=20;
    int c=20, d=30;
    if (a>b && a !=0)
    {
        printf("&& Operator : Both conditions are true \n");
    }
    if (c>d || d!=20)
    {
        printf("|| Operator : Only one condition is true \n");
    }
    if (!(a>b && a !=0))
    {
        printf("! Operator : Both conditions are true \n");
    }
    else
    {
        printf("! Operator : Both conditions are true. But, status is inverted as false");
    }

/*  if (a && b){
        printf("\na && b");
    }
    
    if (a && 0){
        printf("\na && 0");
    }
    
    if (a || 0){
        printf("\na || 0");
    }
*/
int a=40, b=20;
    int c=20, d=30;
    
    if (a && b){
        printf("\n a && b");
    }
    if (a && 0){
        printf("\n a && 0");
    }
    if (a || 0){
        printf("\n a || 0");
    }
//And oprator
int a = 2;
    int p = (2<10)&&(a=4);
    printf("a=%d \t",a);
    
    int b = 2;
    p = (2>10)&&(b=4);
    printf("b=%d \t",b);
    
    int c =2, d = 2;
    p = (2>10)&&(c=4)&&(d=4);
    printf("c=%d \t d=%d \t",c,d);

//OR oprator
int a = 2;
    int p = (2<10)||(a=4);
    printf("a=%d \t",a);
    
    int b = 2;
    p = (2>10)||(b=4);
    printf("b=%d \t",b);
    
    int c =2, d = 2;
    p = (2>10)||(c=4)||(d=4);
    printf("c=%d \t d=%d \t",c,d);

    return 0;
}
