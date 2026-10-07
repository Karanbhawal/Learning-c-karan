#include<stdio.h>
int main(){
    int age;
    printf("enter age:");
    scanf("%d" , &age);
    if (age >= 18){
        printf("they are an adult \n");
        printf("they can drive \n");
        printf("they can vote \n");
    }
    else if (age < 18 && age >= 12){
        printf("teenager");
    }
    else if(age < 12){
        printf("child");
    }
    else{
        printf("invalid age");
    }
return 0;
}