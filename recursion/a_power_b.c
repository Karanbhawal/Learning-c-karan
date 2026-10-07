#include<stdio.h>
int power(int a , int b){
    if(b == 0) return 1;
    return a*power(a , (b - 1));
}
int main(){
    int a , b;
    printf("enter base : ");
    scanf("%d" , &a);
    printf("enter power : ");
    scanf("%d" , &b);

   int x = power(a , b);
   printf("%d raised to the power %d is : %d\n" , a , b , x);
    return 0;
}