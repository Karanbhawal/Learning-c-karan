#include<stdio.h>
int main(){
    // ascii of A is 65
    // ascii of a is 97
    // ascii of 0 is 48
    // ascii of 9 is 57
    //char ch = '\0'; // null character
    char arr[] = {'h' , 'e' , 'l' , 'l' , 'o' , '\0'};
    int i = 0 ;
    while(arr[i] != '\0'){
        printf("%c " , arr[i]);
        i++;
    }
    return 0;
}