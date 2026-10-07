#include<stdio.h>
int factorial(int num){
    int fact = 1;
    for(int i = 1 ; i <= num ; i++){
        fact = fact*i;
    }
    return fact;
}
int combination( int n , int r){
    return factorial(n)/(factorial(r)*factorial(n-r));
}
int main(){
    int x;
    printf("Enter the length : ");
    scanf("%d" , &x);

    for(int i = 0 ; i <= x ; i++){
        for(int j = 1 ; j <= (x - i ) ; j++){
            printf(" ");
        }
        for(int k = 0 ; k <= i ; k++){
            printf("%d" , combination(i , k));
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}