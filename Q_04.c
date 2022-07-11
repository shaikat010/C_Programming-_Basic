#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    
    char password[20];
    
    int lowercheck = 0;
    int uppercheck = 0;
    int symbolcheck = 0;
    int digitcheck = 0;
    int exclamationCheck = 0;

    printf("Enter new password:");
    scanf("%s",password);
    printf("Your password entered was %s",password);
    char c;
    int i;
    for (c = 'A'; c <= 'Z'; ++c)
        if(strchr(password, i) != NULL){
                uppercheck = 1;
            }
            
        //printf("%c ", c);
        //printf("\n");
    for (c = 'a'; c <= 'z'; ++c)
        if(strchr(password, i) != NULL){
                digitcheck = 1;
            }
        //printf("%c ", c);

    for (i = 0; i <= 9; ++i)
        if(strchr(password, i) != NULL){
                digitcheck = 1;
            }
        //printf("%d ", i);

    

    if(strchr(password, '_') != NULL)
    {
        symbolcheck = 1;
    }

    if(strchr(password, '$') != NULL)
    {
        symbolcheck = 1;
    }

    if(strchr(password, '#') != NULL)
    {
        symbolcheck = 1;
    }

    if(strchr(password, '@') != NULL)
    {
        symbolcheck = 1;
    }

    if(symbolcheck = 1 && digitcheck = 1 && uppercheck = 1 && lowercheck = 1){
        printf("OK");
    }

    else{
        if(digitcheck!=1){
            printf("Digit missing!");

        }
        if(symbolcheck!=1){
            printf("symbol missing!");

        }
        if(lowercheck!=1){
            printf("Lowercase missing!");


        }
        if(uppercheck!=1){
            printf("Uppercase missing!");


        }
    }
    // printf("The value of symbolcheck is %d ", symbolcheck);
    // printf("The value of digitcheck is %d", digitcheck);
    // printf("The value of uppercheck is %d", uppercheck);
    // printf("The value of lowercheck is %d", lowercheck);


    return 0;


}

//_ , $, #, @) 
