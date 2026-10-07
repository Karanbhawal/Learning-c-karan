#include<stdio.h>
int main(){
    int x ;
    printf("Enter the no. of student : ");
    scanf("%d" , &x);
    int marks[x] ;
    for(int i = 0 ; i < x ; i++){
        printf("Enter the marks of the student no. %d : " , i + 1);
        scanf("%d" , &marks[i]);
    }
    printf("\n");
    for(int i = 0 ; i < 10 ; i++){
        if(marks[i] < 35){
            printf("roll no. %d has marks less then 35\n" , i + 1);
        }
    }
    return 0;
}