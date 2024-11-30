// BOOLEANS!! 
// Booleans are basically true or false, or 0 and 1.

// Yung ni-example dati ni Sir Jansen, para madali lang.
#include <iostream>
using namespace std; 

int myAge = 25; 
int votingAge = 18;

int main() {
    if (myAge >= votingAge) { // if the condition here is true, it will output "Old enough to vote!"
        cout << "Old enough to vote!";
    } else { // Else or if false, then it will output "Not old enough to vote."
        cout << "Not old enough to vote.";
    }
}
