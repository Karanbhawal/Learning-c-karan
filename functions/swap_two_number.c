#include<stdio.h>
void swap(int *num1 , int *num2){
    *num1 = *num1 + *num2;
    *num2 = *num1 - *num2;
    *num1 = *num1 - *num2;
    return;
}
int main(){
    int a , b ;
    printf("Enter the first no. : ");
    scanf("%d" , &a);
    printf("Enter the second no. : ");
    scanf("%d" , &b);

    swap( &a , &b);

    printf("The first no. is : %d\n" , a);
    printf("The second no. is : %d" , b);
    return 0 ;
}