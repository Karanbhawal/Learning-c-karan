#include<stdio.h>
int main(){
    // int n;
    // printf("enter number");
    // scanf("%d" , &n);
     
    // if(n>99 && n<1000){
    //     printf("it is a three digit number");
    // }else{
    //     printf("number is not a three digit number");
    // }
   
    int n;
    printf("enter number");
    scanf("%d" , &n);

    if(n%5 == 0 || n%3 == 0){
        printf("it is");
    }else{
        printf("it is not");
    }
    return 0;
}