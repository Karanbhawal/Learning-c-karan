#include<stdio.h>
int main(){
    int arr[5] = {2 , 4 , 6 , 8 , 1}; // arrays of five variable
    int brr[5];
    //indix start from 0 like 0 , 1 , 2 , 3 , 4 for the given array
    for(int i = 0 ; i < 5 ; i++){//to take input
        printf("Enter the element no. %d : " , i + 1);
        scanf("%d" , &brr[i]);
    }
    for(int i = 0 ; i < 5 ; i++){//this is to print the array
        printf("%d " , brr[i]);
    }
    printf("\n");
    for(int i = 4 ; i >= 0 ; i--){//to print array in reverse
        printf("%d " , brr[i]);
    }
    arr[2] = 100;//to modifi a single elemint
    printf("\n%d" , arr[2]);//to print a single elemint fo the arrray
    //address of the first element of the array is the addrass of the whole array

    return 0;
}