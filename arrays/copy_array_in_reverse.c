#include<stdio.h>
int main(){
    int arr[9] = {1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9};
    int brr[9];
    int x = 0;
    for(int i = 8 ; i >= 0 ; i--){
        brr[x] = arr[i];
        x++;
    }
    for(int j = 0 ; j < 9 ; j++){
        printf("%d " , brr[j]);
    }
    return 0;
}