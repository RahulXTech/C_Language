#include<stdio.h>

int main(){
int arr[10] = {1,6,3,2,9,3,2,6,7,0};
int target = 70;


for(int i=0; i<10; i++ ){
    if(arr[i] == target){
        printf(" Your target is availaible index no : %d",i);
        return 0;
    }
}
printf("Your target is not available in the array");

int aaaa = sizeof(5);
printf("%d", aaaa);
    return 0;
}