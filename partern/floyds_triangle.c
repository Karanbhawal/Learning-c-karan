#include<stdio.h>
int main(){
    int x ;
    printf("Enter the length : ");
    scanf("%d" , &x);

    int num = 1;
    for(int i = 0 ; i < x ; i++){
        for(int j = 0 ; j <= i ; j++){
            printf("%d" , num);
            num++;
        }
        printf("\n");
    }

    return 0;
}
