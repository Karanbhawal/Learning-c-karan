#include<stdio.h>
int main(){
    int x ;
    printf("Enetr the length : ");
    scanf("%d" , &x);

    for(int i = 1 ; i <= x ; i++){
        for(int j = 1 ; j <= (x - i) ; j++){
            printf(" ");
        }
        for(int k = 1 ; k <= i ; k++){
            int a = 64 + k;
            char ch = (char)a;
            printf("%c" , ch);
        }
        for(int l = (i - 1) ; l > 0 ; l--){
            int b = 64 + l;
            char ch2 = (char)b;
            printf("%c" , ch2);
        }
        printf("\n");
    }

    return 0;
}
