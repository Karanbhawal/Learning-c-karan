#include<stdio.h>
int add(int num1 , int num2){ // num1 and num2 are two seprate variables and are colled argument
    return num1 + num2;
}
int main(){
    int a , b ;
    printf("Enter the 1st no. : ");
    scanf("%d" , &a);
    printf("Enter the 2nd no. : ");
    scanf("%d" , &b);
    
    int sum;
    sum = add(a , b);// we are passing the value of a and b in to the arguments of the function
    printf("the sum is %d" , sum);
    return 0;
}