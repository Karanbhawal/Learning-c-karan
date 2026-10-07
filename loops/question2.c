#include<stdio.h>
int main(){

   int n;
   printf("enter no.:");
   scanf("%d" , &n);
    int a = 0;

   for(int i = 2;i<=n-1;i++){
        if(n%i == 0){
            a = 1;
            break;
        } 
   }
   if(n == 1){
    printf("nor prime not composit");
   }
   else if(a == 0){
    printf("the no. is prime");
   }else{
    printf("the no. is composit");
   }

    return 0;
}