#include<stdio.h>
int main(){
    int arr[7] = {1 , 2 , 3 , 4 , 5 , 6 , 7};
    int X = 4;
    int count = 0;
    for(int i = 0 ; i < 8 ; i++){
        if(arr[i] > X) count++;
    }
    printf("\nThe no. of elements grater then X is : %d" , count);
    return 0;
}