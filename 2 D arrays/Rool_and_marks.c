#include<stdio.h>
int main(){
    int rool_marks[4][2];
    for(int i = 0 ; i < 4 ; i++){
       printf("Enter the roll no. : ");
       scanf("%d" , &rool_marks[i][0]);
       printf("Enter the marks : ");
       scanf("%d" , &rool_marks[i][1]);
    }

    for(int i = 0 ; i < 4 ; i++){
        for(int j = 0 ; j < 2 ; j++){
            printf(" %d " , rool_marks[i][j]);
        }
        printf("\n");
    }
    return 0;
}