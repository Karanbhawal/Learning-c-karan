#include<stdio.h>
int main(){

int length , breath ;
printf("Enter the length of your rectangle : ");
scanf("%d" , &length);
printf("Enter the breath of your rectangle : ");
scanf("%d" , &breath);

for(int i = 1 ; i <= length ; i++){
    for(int j = 1 ; j <= breath ; j++){
        printf("*");
    }
    printf("\n");
}

    return 0;
}