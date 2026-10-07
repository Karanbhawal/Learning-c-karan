#include<stdio.h>
void trans(int r , int c , int arr[r][c]){
    int temp;
    for(int i = 0 ; i < r ; i++){
        for(int j = i + 1 ; j < c ; j++){
         // Do not iterat through the whole matris only iterat when j > i (utm) thats why j + i  
            temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    } 
    return;
}
int main(){
    int r , c;
    printf("Enter the no. of row and columm : ");
    scanf("%d %d" , &r , &c);
    if(r != c){
        printf("Invalid input");
        return 0;
    }
    int arr[r][c];
    printf("Enter your matrix\n");
    for(int i = 0 ; i < r ; i++){
        for(int j = 0 ; j < c ; j++){
            scanf("%d" , &arr[i][j]);
        }
    }
    trans(r , c , arr);
    printf("The transposed matrix is\n");
    for(int i = 0 ; i < r ; i++){
        for(int j = 0 ; j < c ; j++){
            printf("%d " , arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}