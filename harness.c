// Include the standard input/output library for printf and fgets
#include <stdio.h>
// Include the string manipulation library for strcmp, strstr, and strcspn
#include <string.h>

// The main function where our program starts executing
int main() {
    // Declare an array of characters (a string) to hold the user's input, up to 256 characters
    char input[256];

    // Start an infinite loop that will run until we explicitly tell it to break
    while (1) {
        // Print a simple prompt symbol so the user knows it's their turn to type
        printf("You: ");

        // Read a line of text from the user via standard input (stdin) and store it in 'input'
        // fgets also reads the newline character ('\n') when the user presses Enter
        if (fgets(input, sizeof(input), stdin) == NULL) {
            // If fgets fails (e.g., end of file), break out of the loop safely
            break;
        }

        // Find the newline character in the input string and replace it with a null terminator ('\0')
        // This removes the trailing newline so we can properly compare the text
        input[strcspn(input, "\n")] = '\0';

        // Check if the user typed exactly the word "exit"
        if (strcmp(input, "exit") == 0) {
            // Print a cute goodbye message
            printf("Bot: Goodbye! Have a wonderful day!\n");
            // Print a cute ASCII art cat (using \\ to escape the backslash character)
            printf("  /\\_/\\ \n");
            printf(" ( o.o ) \n");
            printf("  > ^ < \n");
            // Break out of the infinite loop to end the program
            break;
        }
        // If it wasn't "exit", check if the string contains the substring "hello" anywhere inside it
        else if (strstr(input, "hello") != NULL) {
            // Print a cute and friendly greeting
            printf("Bot: Hello there! It is so nice to meet you! (*^-^*)\n");
        }
        // If the input wasn't "exit" and didn't contain "hello"
        else {
            // Echo the exact message back to the user
            printf("Bot: You said: '%s'\n", input);
        }
    }

    // Return 0 to indicate to the operating system that the program finished successfully
    return 0;
}