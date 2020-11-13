// 07.11.2020, 13.11.2020
// main.c for Coding Challenge 1, 2, 3 in the ESPL git-tutorial

#include <stdio.h>
#include "espl_lib.h"

int main(){
    unsigned int number = 0;
    char* ret_string = NULL;
    char con;

again:
    // Eingabe entgegennehmen
    printf("Enter any positive integer number: ");
    scanf("%u", &number);

    // Eingabe umwandeln in String
    ret_string = num_to_words(number);

    // String ausgeben
    while(*ret_string){
        printf("%c", *ret_string);
        ret_string++;
    }
    printf("\n");

    // Weitermachen?
    printf("Thank you. If you wish to continue with another number, enter 'c'. If you wish to exit, enter any other character: ");
    scanf(" %c", &con);

    if(con == 'c'){
        goto again;
    }
    return 0;
}
