# LLM Mini-Harness Procured Via "The Vibe" (ft. Google Gemini)

A beginner-friendly command-line program written in C that demonstrates basic input/output, string manipulation, and while-loops. The repository also includes a Bash script to automate testing.

## Files in this Repository

* **`harness.c`**: The main C program. It runs in an infinite loop, reads user input, responds to specific keywords (like "hello" and "exit"), and echoes back anything else.
* **`test.sh`**: A simple Bash script that uses a "Here-Document" to automatically feed a sequence of inputs into the compiled C program to verify it works correctly.

## Prerequisites

To compile and run this project, you will need:
* A C compiler (like GCC or Clang)
* A Unix-like terminal (Linux, macOS, or WSL on Windows) to run the Bash script

## Getting Started

In a WSL terminal, you should compile harness.c by using the command
*      gcc harness.c -o harness

Then, you can run the chatbot via
*      ./harness
and input some text to try it out.

You can also run the testing script via
*      bash test.sh
which will run through a few standard responses to ensure the program works.
