#include<stdio.h>
int main(){
    int arr[5] = {2 , 2 , 2 , 2 , 2};
    int prod = 1;
    for(int i = 0 ; i < 5 ; i++){
        prod = prod*arr[i];
    }
    printf("the product is : %d" , prod);
    return 0;
}