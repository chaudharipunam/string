/*
...John-print
#include <stdio.h>
int main()
{
    char c[4];
    c[0]='J';
    c[1]='o';
    c[2]='h';
    c[3]='n';
    printf("%s",c);
    return 0;
    
}


printf-- John   - here give character length 20 ,however print John, & remain some space...
/8#include <stdio.h>
int main()
{
    char c[20];
    c[0]='J';
    c[1]='o';
    c[2]='h';
    c[3]='n';
    c[4]='\0';
    printf("%s",c);
    return 0;
    
}


#include <stdio.h>
#include <string.h>
int main()
{
    char c[20];
    c[0]='J';
    c[1]='o';
    c[2]='h';
    c[3]='n';
    c[4]='\0';
    int len= strlen (c);
    printf("Length is: %d\n",len);
}    
    
*/

#include <stdio.h>
#include <string.h>

int main() {
    char myString[100]; // Declare a character array to store the string

    // Initialize the string
    strcpy(myString, "Hello, world!");

    // Print the string
    printf("String: %s\n", myString);

    // Get the length of the string
    int length = strlen(myString);
    printf("String length: %d\n", length);

    // Concatenate another string
    strcat(myString, " Welcome to C programming!");

    // Print the modified string
    printf("Modified string: %s\n", myString);

    // Compare two strings
    char anotherString[100];
    strcpy(anotherString, "Hello, world!");

    if (strcmp(myString, anotherString) == 0) {
        printf("Strings are equal.\n");
    } else {
        printf("Strings are not equal.\n");
    }

    return 0;
}
    
    
    
    
    
    
    
    
    
    

