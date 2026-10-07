#include<stdio.h>
void trans( int r , int c , int arr[r][c] , int brr[c][r]){
    for(int i = 0 ; i < r ; i++){
        for(int j = 0 ; j < c ; j++){
            brr[j][i] = arr[i][j];
        }
    }
    return ;
}
int main(){
    int r , c;
    printf("Enter the no. of rows and columm : ");
    scanf("%d %d" , &r , &c);
    int arr[r][c] , brr[c][r];
    printf("Enter your matrix\n");
    for(int i = 0 ; i < r ; i++){
        for(int j = 0 ; j < c ; j++){
            scanf("%d" , &arr[i][j]);
        }
    }
    trans(r , c , arr , brr);
    printf("The transposed matrix is\n");
    for(int i = 0 ; i < c ; i++){
        for(int j = 0 ; j < r ; j++){
            printf("%d " , brr[i][j]);
        }
        printf("\n");
    }
    return 0;
}