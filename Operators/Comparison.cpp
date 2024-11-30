// COMPARISON OPERATORS!!

// Comparison are used to compare values or variables. This is basically how the computer make decision.
// Comparison operators return value are trtue or false or 1 or 0, aka boolean values, more on that
// in later topics.


#include <iostream>
using namespace std;

int main() {
  int x = 5;
  int y = 3;
  cout << (x == y); // You can read "==" as equal.
  cout << (x != y); // "!=" means "Not Equal"
  cout << (x > y); // ">" is greater than.
  cout << (x < y); // "<" is less than.
  cout << (x >= y); // ">=" is greater than or equal.
  cout << (x <= y); // "<=" is less than or equal.

  return 0; 
}
