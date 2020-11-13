// 07.11.2020
// main.c for Coding Challenge 1 in the ESPL git-tutorial

#include <stdio.h>
#include "espl_lib.h"

int main(){
    unsigned int number = 0;
    int counter = 0;
    char* ret_string;

    // Eingabe ent
    printf("Enter a number between 0 and 9: ");
    scanf("%i", &number);

    ret_string = num_to_words(number);

    while(ret_string != NULL){
        printf("%c", *(ret_string + counter));
        counter++;
    }
    printf("\n");

    //printf("Hello ESPL\n");
    //printf("This is a new print.");

    return 0;
}
