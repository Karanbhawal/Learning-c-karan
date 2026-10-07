#include<stdio.h>
int power(int a , int b){
    if(b == 0) return 1;
    int x = power(a , b/2);
    if(b%2 == 0){
        return x*x;
    }
    else{
        return x*x*a;
    }
}
int main(){
    int b , p;
    printf("enter base  : ");
    scanf("%d" , &b);
    printf("enter power : ");
    scanf("%d" , &p);

    printf("%d" , power(b , p));
    return 0;
}