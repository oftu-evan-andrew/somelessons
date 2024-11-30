// There's a fine difference between a number and a string.
// C++ use + operator for both addition and concatenation. Strings are added. Strings are concatenated.

// If you add two numbers, the result will be a number.
#include <iostream>
#include <string>

int main() {
    int x = 10; 
    int y = 20;
    int z = x + y; // z will be 30, because we defined this as a number.

    int a = 10; 
    int b = 20; 
    int c = a + b; // c will be 1020, because we defined this as a string (concatenation).
}