#include<stdio.h>
int main(){
    int arr[8] = { 1 , 2 , 3 , 4 , 5 , 6 , 7 ,8};
    int first_largest = arr[0];
    for(int i = 0 ; i < 8 ; i++){
        if(arr[i] > first_largest) first_largest = arr[i];
    }
    int second_largest = first_largest;
    int diff = first_largest;
    for(int j = 0 ; j < 8 ; j++){
        if(first_largest - arr[j] != 0 && first_largest - arr[j] < diff){
            second_largest = arr[j];
        } 
    }
    printf("The second largest element is : %d" , second_largest);
    return 0;
}