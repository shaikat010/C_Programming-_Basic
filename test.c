#include<stdio.h>
#include <string.h>

int main() {
   char string[50];
   printf("Enter a string:");
   scanf("%c",&string);
   // Extract the first token
   char * token = strtok(string, " ");
   // loop through the string to extract all other tokens
   char source = token;
   char destination = NULL;
   while( token != NULL ) {
      strcat(destination," ");
      strcat(destination,token);
      printf( " %s\n", token ); //printing each token
      token = strtok(NULL, " ");
   }
   return 0;
}