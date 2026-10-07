#include<stdio.h>
int main(){
    int r , c;
    printf("Enter the no . of raws and columm : ");
    scanf("%d %d" , &r , &c);
    int arr[r][c];
    printf("Enter your matrix\n");
    for(int i = 0 ; i < r ; i++){
        for(int j = 0 ; j < c ; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    int max = arr[0][0] , min = arr[0][0] , max_index[2] , min_index[2];
    for(int i = 0 ; i < r ; i++){
        for(int j = 0 ; j < c ; j++){
            if(arr[i][j] >= max){
                max = arr[i][j];
                max_index[0] = i;
                max_index[1] = j;
            }
            if(arr[i][j] <= min){
                min = arr[i][j];
                min_index[0] = i;
                min_index[1] = j;
            }
        }
    }
    printf("The greatest element in the matrix is : %d with index %d %d\nThe smallest element in the matrix is : %d with index %d %d" , max , max_index[0] + 1 , max_index[1] + 1 , min , min_index[0] + 1, min_index[1] + 1);
    return 0;
}