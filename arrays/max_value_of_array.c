#include<stdio.h>
int main(){
    int arr[8] = {9 , 2 , 11 , 13 , 3 , 4 , 8 , 7};
    int max = arr[0];
    for(int i = 0 ; i < 8 ; i++){
        if(arr[i] >= max) max = arr[i]; 
    }
    printf("the maximum value of the array is : %d" , max);
    return 0;
}