#include<stdio.h>
int main(){
    int x ;
    printf("Enter the length of the diamond : ");
    scanf("%d" , &x);

    int a = x/2 ;
    for(int i = 1 ; i <= x ; i++){
        if(i <= (x/2 + 1)){
            for(int j = 1 ; j <= (x/2 + 1) - i ; j++){
                printf(" ");
            }
            for(int k = 1 ; k <= (2*i - 1) ; k++){
                printf("*");
            }
        }else{
            for(int j = 1 ; j <= i - (x/2 + 1) ; j++){
                printf(" ");
            }
            for(int k = 1 ; k <= (a*2 - 1) ; k++){
                printf("*");
            }
            a--;
        }
        printf("\n");
    }

}