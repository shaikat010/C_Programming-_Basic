#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    
    char value[20];
    prinf("Enter a value to check");
    scanf("%s ",value);
    char check[20];
    *check = strrev(value);
    if(*check == value){
        printf("It is a palindrome");

    }

    else{
        printf("Not a palindrome");
    }
    return 0;
}
