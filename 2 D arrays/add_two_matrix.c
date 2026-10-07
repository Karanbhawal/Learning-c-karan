#include<stdio.h>
int main(){
    int r , c;
    printf("Enter the no. of rows  and columm : ");
    scanf("%d %d" , &r , &c);
    int arr1[r][c] , arr2[r][c];
    printf("Enter the first martix\n");
    for(int i = 0 ; i < r ; i++){
        for(int j = 0 ; j < c ; j++){
            scanf("%d" , &arr1[i][j]);
        }
    }
    printf("Enter the second martix\n");
    for(int i = 0 ; i < r ; i++){
        for(int j = 0 ; j < c ; j++){
            scanf("%d" , &arr2[i][j]);
        }
    }
    for(int i = 0 ; i < r ; i++){
        for(int j = 0 ; j < c ; j++){
            arr1[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    printf("The resutant matrix is \n");
    for(int i = 0 ; i < r ; i++){
        for(int j = 0 ; j < c ; j++){
            printf(" %d " , arr1[i][j]);
        }
        printf("\n");
    }
    return 0;
}