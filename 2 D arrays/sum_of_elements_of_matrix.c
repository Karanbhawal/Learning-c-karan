#include<stdio.h>
int main(){
    int r , c , sum = 0;
    printf("enter tne no. of rows and collumm : ");
    scanf("%d %d" , &r , &c);
    int arr[r][c];
    printf("Enter your matrix\n");
    for(int i = 0 ; i < r ; i++){
        for(int j = 0 ; j < c ; j++){
            scanf("%d" , &arr[i][j]);
        }
    } 
    for(int i = 0 ; i < r ; i++){
        for(int j = 0 ; j < c ; j++){
            sum = arr[i][j] + sum;
        }
    }
    printf("The sum of all the elenents of this matrix is : %d" , sum);
    return 0;
}