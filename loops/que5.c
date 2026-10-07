#include<stdio.h>
int main(){
 int n , h;;
 printf("enter no.:");
 scanf("%d" , &n);
 h = n;

    if(n == 0){
        printf("1");
    }
    else{
        
         for(int i = 1;i <= (n-1);i++){
             h = h*i;
         }

         printf("%d" , h);
    }

    return 0;
}