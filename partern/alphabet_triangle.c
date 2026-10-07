#include<stdio.h>
int main(){
    int x ;
    printf("enter the length : ");
    scanf("%d" , &x);

    for(int i = 1 ; i <= x ; i++){
        for(int j = 1 ; j <= i ; j++){
            int a = 64 + j;
            char ch = (char)a;
            printf("%c" , ch);
        }
        printf("\n");
    }
    
    return 0;
}