#include<stdio.h>
void swap( int arr1[] , int arr2[]){
    int temp[5];
    for(int i = 0 ; i < 5 ; i++){
        temp[i] = arr1[i];
    }
    for(int i = 0 ; i < 5 ; i++){
        arr1[i] = arr2[i];
    }
    for(int i = 0 ; i < 5 ; i++){
        arr2[i] = temp[i];
    }
    return ;
}
int main(){
    int arr1[5] = {1 , 2 , 3 , 4 , 5} , arr2[5] = {5 , 4 , 3 , 2 , 1};
    swap(arr1 , arr2);
    for(int i = 0 ; i < 5 ; i++){
        printf("%d " , arr1[i]);
    }
    printf("\n");
    for(int i = 0 ; i < 5 ; i++){
        printf("%d " , arr2[i]);
    }
    return 0;
    //in case of arrays they always pass by refrence , no need to use * to opreate on the value 
}