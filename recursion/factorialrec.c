#include<stdio.h>
int factorial(int num){
    if(num == 1 || num == 0) return 1; // bace case
    return num*factorial(num - 1);
}
int main(){

    int n;
    printf("enter the no. : ");
    scanf("%d" , &n);
    int x = factorial(n);
    printf("%d" , x);

    return 0;
}