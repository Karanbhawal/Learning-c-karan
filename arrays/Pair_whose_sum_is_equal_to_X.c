#include<stdio.h>
int main(){
    int arr[8] = {1 , 2 , 3 , 4 , 5 , 6 , 7 , 8};
    int X = 12;
    int count = 0;
    for(int i = 0 ; i < 8 ; i++){
        for(int j = i + 1 ; j < 8 ; j++){
            if(arr[i] + arr[j] == X) count++;
        }
    }
    printf("\nThe no. of pairs whose sum is equal to X is : %d" , count);
    return 0;
}