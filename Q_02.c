#include <stdio.h>
#include <stdlib.h>

int main() {
    // Write C code here
    int a;
    int b;
    char c[1];
    char add = "+";
    char s = "-";
    char d = "/";
    char m = "*";
    printf("Enter a number:");
    scanf("%d",&a);
    printf("Enter another number:");
    scanf("\n%d",&b);
    printf("Enter a symbol:");
    scanf("%s",c);
    
    if(*c == add)
    {
        int sum;
        sum = a + b;
        printf("%d",&sum);
    }

    if(c =="-")
    {
        int sub;
        sub = a + b;
        printf("%d",&sub);
    }

    if(c =="*")
    {
        int multiply;
        multiply = a + b;
        printf("%d",&multiply);
    }

    else
    {
        int div;
        div = a / b;
        printf("%d",&div);
    }

    return 0;
}