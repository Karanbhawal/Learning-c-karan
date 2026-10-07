#include<stdio.h>
int main(){
    int n;
    printf("enter no.:");
    scanf("%d" , &n);
    int c = 0;
    if(n == 0){
        printf("1");
    }
    else{ while(n != 0){
       n = n/10;
       c++;
    }
    printf("%d" , c);
    }
    return 0;
}