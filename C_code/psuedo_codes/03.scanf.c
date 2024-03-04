// #include <stdio.h>

// int main() {
//     int numericValue;
//     char charValue;

//     printf("Enter a numeric value: ");
//     scanf("%d", &numericValue);

//     printf("Enter a character value: ");
//     scanf("%c", &charValue);

//     printf("Numeric value entered: %d\n", numericValue);
//     printf("Character value entered: %c\n", charValue);

//     return 0;
// }

/* Program will not run as expected as numeric value is entered then when we press
enter it consider it as a character and end the program to overcome then input buffer is clear*/

#include <stdio.h>

int main()
{
    int numericValue;
    char charValue;

    // Ask for numeric value
    printf("Enter a numeric value: ");
    scanf("%d", &numericValue);

    // Discard the newline character left in the buffer
    // scanf("%*c");
    // -----------------------------OR------------------------------------

    // Clear input buffer before reading character value
    while (getchar() != '\n');

    // Ask for character value
    printf("Enter a character value: ");
    scanf("%c", &charValue);

    // Display the values entered
    printf("Numeric value entered: %d\n", numericValue);
    printf("Character value entered: %c\n", charValue);

    return 0;
}

/*
scanf("%*c"):
-Directly clears the buffer by reading and discarding a single character without storing it.
-Useful for quickly clearing the buffer after a scanf call.
-Concise and single function call.

getchar():
-Reads and returns a character from the input buffer.
-Can be used in a loop to clear multiple characters from the buffer.
-Provides more control if you need to process the character being read.
*/