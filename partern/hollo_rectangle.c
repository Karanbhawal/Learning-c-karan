#include<stdio.h>
int main(){
    int length , breath ;
    printf("Enter the length of the rectangle : ");
    scanf("%d" , &length);
    printf("Enter the breath of the rectangle : ");
    scanf("%d" , &breath);

    for(int i = 1  ; i  <= length ; i++){
        for(int j = 1 ; j <= breath ; j++){
            if(i == 1 || i == length || j == 1 || j == breath){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}