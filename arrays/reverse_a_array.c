#include<stdio.h>
int main(){
    int arr[7] = {1 , 2 , 3 , 4 , 5 , 6 , 7};
    int x = 0;
    int end = 6;
    int start = 0;
    while (start < end)
    {
        int temp =arr[end];
        arr[end] = arr[start];
        arr[start] = temp;
        end--;
        start++;
    }
    for(int i = 0 ; i < 7 ; i++){
        printf("%d " , arr[i]);
    }
    return 0;
}