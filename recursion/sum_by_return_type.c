#include<stdio.h>
int sum(int n){
    if(n == 1) return 1;
    return n + sum(n - 1);
}
int main(){
    int n;
    printf("enter no. : ");
    scanf("%d" , &n);

    int x = sum(n);
    printf("%d" , x);
    return 0;
}