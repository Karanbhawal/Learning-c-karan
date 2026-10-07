#include<stdio.h>
void Grating(){
    printf("Good morning \n");
    printf("How are you\n");
    return;
}
int main(){
    Grating();//function call compiler will go to the Greating function
    Grating();
    Grating();
    return 0;
}