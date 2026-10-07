#include<stdio.h>
int main(){
    int x ;
    printf("Enter the length : ");
    scanf("%d" , &x);

    for(int i = 1 ; i <= x ; i++){
        for(int j = 1 ; j <= i ; j++){
            if( (i + j)%2 == 0 ){
                printf("1");
            }
            else{
                printf("0");
            }
        }
        printf("\n");
    }

    return 0;
}