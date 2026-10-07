#include<stdio.h>
int main(){
    int x ;
    printf("Enter the length : ");
    scanf("%d" , &x);

    for(int i = 0 ; i < x ; i++){
       if(i == 0){
         for(int j = 1 ; j <= (2*x - 1) ; j++){
                printf("%d" , j);
            }
        }else{
            for(int k = 1 ; k <= (x - i) ; k++){
                printf("%d" , k);
            }
            for(int l = 1 ; l <= (2*i - 1) ; l++){
                printf(" ");
            }
            for(int m = (x + i) ; m <= (2*x - 1) ; m++){
                printf("%d" , m);
            }
        }
        printf("\n");
    }

    return 0;
}