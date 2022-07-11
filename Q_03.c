#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str;
    printf("Enter the string:");
    scanf("%s",&str);
    
    char * token = strtok(str, "  ");
    printf( " %s\n", token ); //printing the token

    return 0;
}