#include<stdio.h>
int min(int num1 , int num2){
    int x ;
    if(num1 < num2){
        x = num1;
    }else{
        x = num2;
    }
    return x;
}
int HCF(int num1 , int num2){
    int x = 0;
    for(int i = 1 ; i <= min(num1 , num2) ; i++){
        if(num1%i == 0 && num2%i == 0){
            x = i;
        }
        
    }
    return x;
}
int main(){
    int num1 , num2 ;
    printf("Enter the two no. : ");
    scanf("%d %d" , &num1 , &num2);

    int HCF_value = HCF(num1 , num2);
    printf("The HCF of the two no. is : %d" , HCF_value);
    return 0;
} 