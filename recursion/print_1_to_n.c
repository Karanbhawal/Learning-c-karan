#include<stdio.h>
void increasing(int n , int i){
    if(i > n) return;
    printf("%d\n" , i);
    increasing(n , i + 1);
    return;
}
int main(){
    int n  , i;
    printf("enter no. : ");
    scanf("%d" , &n);
 
    increasing(n , 1);
    return 0;
}