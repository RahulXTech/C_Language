#include<stdio.h>
int main()
{

 	printf("\n %d", sizeof(int));
 	int a;
 	printf("\n %d", sizeof(a));
 	printf("\n %d", sizeof(2));

    
    int i = 12;
    int j = sizeof(++i);
    printf("%d  %d", i, j);
 	

    int i = 5, j = 10, k = 15;
    printf("%d ", sizeof(k = k/ (i + j)));
    printf("%d", k);

    printf("%d", printf("Yash"));

    printf("%d", sizeof(printf("Accenture")));

	return 0;
}

