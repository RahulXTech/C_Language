/*Program to understand the use of relational operators*/
#include<stdio.h>
int main()
{
	int a,b ;
	printf("Enter values for a and b : ");
	scanf("%d%d",&a,&b);

	if(a<b)			
  		printf("%d is less than %d\n",a,b);
	if(a<=b)
  		printf("%d is less than or equal to %d\n",a,b);
	if(a==b)
  		printf("%d is equal to %d\n",a,b);
	if(a!=b)
  		printf("%d is not equal to %d\n",a,b);
	if(a>b)
 		printf("%d is greater than %d\n",a,b);
	if(a>=b)
  		printf("%d is greater than or equal to %d\n",a,b);


    int a,b ;
        printf("Enter values for a and b : ");
        scanf("%d%d",&a,&b);
        if(a=b)
        { 
            printf("Assignment operator");
            printf("\n%d", a=b);
        }

    int a = 10, b = 20, c = 30; 
        if (c > b > a) 
            printf("TRUE"); 
        else
            printf("FALSE"); 
  		
	return 0;
    }