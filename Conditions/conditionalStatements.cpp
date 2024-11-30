// We already tackled comparison operators, so let's get into conditional statements naman.

// we use if statements to specify a block of code to be expecuted, if yung condition is true.
#include <iostream>
using namespace std; 
int main() {
    int x = 20;
    int y = 18;

    if (x > y) { 
        cout << "x is greater than y"; // will print this out because the condition is true.
    } else {
        cout << "x is not greater than y";
    }

    if (x < y) {
        cout << "x is less than y";
    } else if (x > y) { // this condition will be checked if the first condition is false.
        cout << "x is greater than y"; // and if the second condition is true, this code will execute.
    }
}


