/*
\n: Represents a newline character.
\t: Represents a tab character. 4 spaces
\': Represents a single quote (apostrophe).
\": Represents a double quote.
\\: Represents a backslash. 
*/

#include <stdio.h>

int main()
{
    // printf("Hello\nWorld"); // Prints "Hello" followed by a newline and then "World".
    // printf("\nThis is a\ttab."); // Prints "This is a    tab." with a tab between "a" and "tab".
    // printf("\nShe said, \"Hello!\""); // Prints: She said, "Hello!"
    // printf("\nBack\bSpace"); // Outputs- "BacSpace" with 'k' erased by \b
    // printf("\nHello\rWorld"); // Outputs- "World" overwriting "Hello" due to \r
    // printf("Hello\rWorldddd"); // Output- "WorlddddHello" 
    printf("Good Morning\r Great"); // Output- " Greatorning" 
                                         //    "Good M" THESE CHARACTERS GOT OVERWRITE
                                        // Instead of G of 'Good' there is space, o - G,..., M - t
}

// For \r the answer is compiler dependent as some compiler
// takes cursor to first char of the same line and starts overwriting 
// takes cursor to next line and start writing