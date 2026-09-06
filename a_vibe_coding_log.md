Beginner-Friendly C Chatbot Program
https://gemini.google.com/app/ce96b60b4f577dfb
User prompt: I have to create a simple command-line program in C, coded as simply as possible, as I'm rather new to programming. Please avoid external libraries entirely; use only standard libraries such as <stdio.h>, <string.h>. The program
specification is as follows: * The program should be in a single .c file. * The program should run in an infinite loop, where in each it asks for user input via fgets * If the user types 'exit', the loop should break and the program should end, after
printing a cute goodbye message and ASCII art. * If the user types a sentence containing the word 'hello', the program should print a cute greeting. * If the user inputs anything else, it should echo their message back to them. * Please add
clear, concise, line-by-line comments detailing what the code is doing.
Response: Here is the complete C program. It is written in a single file, uses only standard libraries, and includes line-by-line comments to help you understand exactly how the logic works.
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
printf(" /\\_/\\ \n");
printf(" ( o.o ) \n");
printf(" > ^ < \n");
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
How to run this:
�. Save the code above in a file named chat.c.
2. Open your terminal or command prompt.
3. Compile the code using a C compiler (like GCC) with the command: gcc chat.c -o chat
4. Run your new program:
◦ On Linux/Mac: ./chat
◦ On Windows: chat.exe
User prompt: Could you create a simple Bash script that sends a few lines into the compiled C program (which is now called harness, by the way) to check if it works? Just have it input 'hello', a couple lines of gibberish, then 'exit'.
Response: Here is a simple Bash script that uses a "Here-Document" (or heredoc) to automatically feed those lines of text directly into your compiled harness program.
#!/bin/bash
echo "Starting the automated test for 'harness'..."
echo "------------------------------------------"
# The <<EOF tells Bash to feed everything until the next 'EOF' into the program
./harness <<EOF
hello
this is just some gibberish
sdlkfjsdlkfjsdf
exit
EOF
echo "------------------------------------------"
echo "Test complete!"
How to use it:
�. Save the code above into a file named test_harness.sh.
2. Make the script executable by running: chmod +x test_harness.sh
3. Run the script: ./test_harness.sh
(Note: Make sure your compiled C program is in the same folder and is exactly named harness before running the script!)
User prompt: Generate me some text for the README for a repo of harness.c and test.sh (the two files I had you generate)
Response: Here is some text you can use for your README.md file. It's written clearly and covers what the files are, how to compile the code, and how to run the test script—perfect for someone just getting started with C and Bash.
# Simple C Chatbot
A beginner-friendly command-line program written in C that demonstrates basic input/output, string manipulation, and while-loops. The repository also includes a Bash script to automate testing.
## Files in this Repository
* **`harness.c`**: The main C program. It runs in an infinite loop, reads user input, responds to specific keywords (like "hello" and "exit"), and echoes back anything else.
* **`test.sh`**: A simple Bash script that uses a "Here-Document" to automatically feed a sequence of inputs into the compiled C program to verify it works correctly.
Firefox about:blank
1 of 2 2026-09-05, 21:03
## Prerequisites
To compile and run this project, you will need:
* A C compiler (like GCC or Clang)
* A Unix-like terminal (Linux, macOS, or WSL on Windows) to run the Bash script
## Getting Started
### 1. Compile the C Program
First, you need to compile the source code into an executable. Open your terminal and run:
```bash
gcc harness.c -o harness
This creates an executable file named harness.
2. Run the Program Manually
To interact with the chatbot yourself, start the program by typing:
./harness
• Type hello to get a greeting.
• Type anything else to see it echoed back.
• Type exit to see the ASCII art and close the program.
3. Run the Automated Test
To quickly verify that the program handles inputs correctly without typing them yourself, you can run the provided test script.
First, make the script executable (you only need to do this once):
chmod +x test.sh
Then, run the script:
./test.sh
This will automatically feed the words "hello", a few lines of gibberish, and "exit" into the program and display the output.
Firefox about:blank
2 of 2 2026-09-05, 21:03