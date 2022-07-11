#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    
    char username[20];
    printf("Enter your username:");
    scanf("%s",username);

    char *value;
    char *value2;

    value = strstr(username, "@kaaj.com");
    value2 = strstr(username, "@sheba.xyz");
    if (value)
        printf("Email address is outdated");

    if (value2)
        printf("Email Address is Okay!");
    else
        printf("Email address is outdated");

    return 0;
}


