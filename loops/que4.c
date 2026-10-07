#include<stdio.h>
int main(){

    int n , c , h;
    c = h = 0;
  
    printf("enter no.:");
    scanf("%d" , &n);

    while(n != 0){
       h = h*10;
       c = (n%10);
       h = c + h;
       n = n/10;
    }

    printf("%d" , h);

    return 0;
}