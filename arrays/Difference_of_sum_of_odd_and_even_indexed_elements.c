#include<stdio.h>
int main(){
    int arr[6] = {1 , 3 , 5 , 7 , 9 , 11};
    int sum_odd = 0;
    int sum_even = 0;
    for(int i = 0 ; i < 6 ; i++){
        if(i%2 == 0) sum_even = sum_even + arr[i];
        else sum_odd = sum_odd + arr[i];
    }
    int diff = sum_even - sum_odd;
    printf("\n the diff. is : %d" , diff);
    return 0;
}