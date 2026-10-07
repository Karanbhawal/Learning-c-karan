#include<stdio.h>
int main(){
    int n , s , h;
    s = 0;
    h = 0;
    printf("enter no.:");
    scanf("%d" , &n);

    while(n != 0){
        s = n%10;
        n = n/10;
        h = h + s;
    }
    printf("%d" , h);    
    return 0;
}