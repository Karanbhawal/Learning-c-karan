#include<stdio.h>
int main(){

    int n , h;
    h = 0;

    printf("enter no.:");
    scanf("%d" , &n);

    for(int i =  1;i <= n;i++){
        if(i%2 != 0){
            h = h + i;
        }
        else{
            h = h - i;
        }

    }

    printf("%d" , h);
    return 0;
}