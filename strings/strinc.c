#include<stdio.h>
#include<string.h>
int main(){
    //char str[] = "hello"; // can also inisilize stringh with this size is not needed
    //int i = 0;
    // while(str[i] != '\0'){
    //     printf("%c" , srr[i]);
    //     i++;
    // }
    // printf("%s" , str);// can also print string this way
    char str[40]; // cant decleare without size
    // scanf("%s" , str); //only the first word will be considered
    // printf("your input was : %s" , str);
    gets(str); //entire sentence can be input
    puts(str);

    return 0;
}