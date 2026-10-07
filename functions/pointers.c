#include<stdio.h>
int main(){
    int A = 5 ; 
    int* p = &A ;// p is a pointer that stored the addrss of A 
    //%p is the format spaciafer for pointers or address
    printf("%p\n" , p);//address of the A variable will be printed
    printf("%d\n" , *p);//this will print the value of a it is called derefrensing
    //if we opprate on *p then it means you are oppreating on A
    printf("%p\n" , &p);// this will print the address of p 
    int** P = &p;// to store the addrress of a pointer use two star
  
    return 0;
}