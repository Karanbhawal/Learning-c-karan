#include<stdio.h>
int main(){
    int length;
    printf("Enter the length of the triangle : ");
    scanf("%d" , &length);

    for(int i = length ; i >= 1 ; i--){
        for(int j = i ; j >= 1 ; j--){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}