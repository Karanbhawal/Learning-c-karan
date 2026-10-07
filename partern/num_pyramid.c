#include<stdio.h>
int main(){
    int x ;
    printf("Enter the length : ");
    scanf("%d" , &x);

    for(int i = 1 ; i <= x ; i++){
        for(int j = 1 ; j <= (x - i) ; j++){
            printf(" ");
        }
        for(int k = 1 ; k <= ( 2*i - 1) ; k++){
            printf("%d" , k);
        }
        printf("\n");
    }
    
    return 0;
}