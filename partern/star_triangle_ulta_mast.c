#include<stdio.h>
int main(){
    int x ;
    printf("Enter the value : ");
    scanf("%d" , &x);

    int a = 1 ;
    for(int i = 1 ; i <= x ; i++){
        if(i == 1){
            for(int m = 1 ; m <= (2*x - 1) ; m++){
                printf("*");
            }
        }else{
            for(int j = 0 ; j <= (x - i) ; j++){
                printf("*");
            }
            for(int k = 1 ; k <= (2*a - 1) ; k++){
                printf(" ");
            }
            for(int n = 0 ; n <= (x - i) ; n++){
                printf("*");
            }
            a++;
        }
        
        printf("\n");
    }
    return 0;
}