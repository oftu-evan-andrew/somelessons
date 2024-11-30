// LOGICAL OPERATORS!!
// with comparison operators, you can also test for true or false values with logical operators.
// Logical operators are used to determine the logical between variables or values. 

#include <iostream>
using namespace std;


    int x = 5;
    int y = 10;

int main() {
    cout << (x >= 3 && y <= 10); // %% means logical and, returns true if BOTH statements are true.
    cout << (x > 3 || y < 20); // || means logical or, returns true if ONE of the statements is true.
    cout << !(x == 5 && y < 10); // "!" means logical not, reverses the result, returns false if statement is true.
}