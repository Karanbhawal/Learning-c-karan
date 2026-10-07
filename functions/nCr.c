#include<stdio.h>
int factorial( int num){
     int fact = 1;
    for(int i = 1 ; i <= num ; i++){
        fact = fact*i;
    }
    return fact;
}
int combination(int n , int r){
    return factorial(n)/(factorial(r)*factorial(n - r));
}
int main(){
    int n , r;
    printf("Enter n : ");
    scanf("%d" ,&n);
    printf("Enter r : ");
    scanf("%d" ,&r);

    printf("your answer is : %d" , combination(n , r));

    return 0;
}