#include<stdio.h>
int main (){
    int n ;
    printf("enter the length(only odd no.) : ");
    scanf("%d" , &n);

    for(int i = 1 ; i <= n ; i++){
        if(i != (n/2 + 1)){
            for(int j = 1 ; j <= n ; j++){
                if(j != (n/2 + 1)){
                    printf(" ");
                }else{
                    printf("*");
                }
            }
        }else{
            for(int j = 1 ; j <= n ; j++){
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}