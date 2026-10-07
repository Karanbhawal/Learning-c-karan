#include<stdio.h>
int main(){
    int length;
    printf("Enter the length of the triangle : ");
    scanf("%d" , &length);

    for(int i = length ; i >= 1 ; i--){
        for(int j = 1 ; j <= i ; j++){
            printf("%d" , j);
        }
        printf("\n");
    }
    
    return 0;
}
